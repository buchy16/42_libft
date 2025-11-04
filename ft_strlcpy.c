/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:12:02 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/27 17:31:57 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t str_size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (str_size <= 0)
		return (ft_strlen(src));
	while (src[i])
	{
		if (i < str_size - 1)
		{
			dest[i] = src[i];
			j++;
		}
		i++;
	}
	dest[j] = 0;
	return (i);
}
