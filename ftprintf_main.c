/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:35:07 by nbuchy            #+#    #+#             */
/*   Updated: 2025/11/21 09:54:20 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int	parameters_applying(char letter, va_list args)
{
	if (letter == 'c')
	{
		ft_putchar_fd((char)va_arg(args, int), 1);
		return (1);
	}
	else if (letter == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (letter == 'p')
		return (ft_print_pointer(va_arg(args, unsigned long long)));
	else if (letter == 'd' || letter == 'i')
		return (ft_pnbr_b(va_arg(args, int), "0123456789", 10));
	else if (letter == 'u')
		return (ft_pnbr_b(va_arg(args, unsigned int), "0123456789", 10));
	else if (letter == 'x')
		return (ft_pnbr_b(va_arg(args, unsigned int), "0123456789abcdef", 16));
	else if (letter == 'X')
		return (ft_pnbr_b(va_arg(args, unsigned int), "0123456789ABCDEF", 16));
	else if (letter == '%')
		return (ft_putstr("%"));
	write(1, "%", 1);
	write(1, &letter, 1);
	return (2);
}

// une fonction unique pour tous les gouverner tous
int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, string);
	while (string[i] != 0 && count != -1)
	{
		if (string[i] == '%')
		{
			if (string[i + 1] == 0)
				return (-1);
			count += parameters_applying(string[i + 1], args);
			i += 2;
		}
		else
		{
			write(1, string + i, 1);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
