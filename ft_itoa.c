/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:47:28 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/23 08:58:42 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	count_numbers(long nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		result++;
		nb *= -1;
	}
	if (nb < 10)
		return (result);
	return (result + count_numbers(nb / 10));
}

char	*ft_itoa(int n)
{
	char	*string;
	long	ln;
	int		s_size;
	int		i;
	int		is_positive;

	ln = (long)n;
	s_size = count_numbers(ln);
	is_positive = ln < 0;
	if (ln < 0)
		ln *= -1;
	i = s_size - 1;
	string = malloc(sizeof(char) * s_size + 1);
	if (string == NULL)
		return (NULL);
	while (i >= is_positive)
	{
		string[i] = (ln % 10) + 48;
		ln = ln / 10;
		i--;
	}
	if (is_positive == 1)
		string[0] = 45;
	string[s_size] = 0;
	return (string);
}
