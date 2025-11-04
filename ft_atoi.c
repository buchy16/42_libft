/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:23:46 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/22 17:36:49 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	return_good_stuff(unsigned long long nb, int sign, int nb_of_nb)
{
	if ((nb > 9223372036854775807) || (nb_of_nb > 20))
	{
		if (sign < 0)
			return (0);
		if (sign > 0)
			return (-1);
	}
	return ((long long)nb * sign);
}

int	ft_atoi(const char *string)
{
	int					i;
	int					nb_of_nb;
	int					sign;
	unsigned long long	result;

	i = 0;
	nb_of_nb = 0;
	sign = 1;
	result = 0;
	while ((string[i] >= 9 && string[i] <= 13) || string[i] == 32)
		i++;
	if (string[i] == '-' || string[i] == '+')
	{
		if (string[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(string[i]) > 0)
	{
		result = (result * 10) + (string[i] - 48);
		if (result != 0)
			nb_of_nb++;
		i++;
	}
	return (return_good_stuff(result, sign, nb_of_nb));
}
