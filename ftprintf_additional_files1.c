/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf_additional_files1.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:27:43 by nbuchy            #+#    #+#             */
/*   Updated: 2025/11/21 09:53:06 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pnbr_b(long nbr, const char *base, int base_lenght)
{
	char	letter;
	int		count;

	count = 1;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		count++;
	}
	if (nbr < base_lenght)
		letter = base[nbr];
	else
	{
		count += ft_pnbr_b(nbr / base_lenght, base, base_lenght);
		letter = base[nbr % base_lenght];
	}
	write(1, &letter, 1);
	return (count);
}

int	ft_putnbr_base_max(unsigned long long nbr, const char *base,
		int base_lenght)
{
	char	letter;
	int		count;

	count = 1;
	if (nbr < (unsigned long long)base_lenght)
		letter = base[nbr];
	else
	{
		count += ft_putnbr_base_max(nbr / base_lenght, base, base_lenght);
		letter = base[nbr % base_lenght];
	}
	write(1, &letter, 1);
	return (count);
}

int	ft_print_pointer(unsigned long long adress)
{
	int	count;

	count = 0;
	if (adress == 0)
	{
		write(1, "(nil)", 5);
		count = 5;
	}
	else
	{
		write(1, "0x", 2);
		count = ft_putnbr_base_max(adress, "0123456789abcdef", 16) + 2;
	}
	return (count);
}

int	ft_putstr(char *string)
{
	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
		ft_putstr_fd(string, 1);
	return (ft_strlen(string));
}
