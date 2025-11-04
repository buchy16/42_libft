/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:02:28 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/16 15:23:05 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *pattern, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(pattern) == 0)
		return ((char *)string);
	while (string[i] != 0 && i < size)
	{
		while (string[i + j] == pattern[j] && i + j < size)
		{
			j++;
			if (pattern[j] == 0)
				return ((char *)(string + i));
		}
		j = 0;
		i++;
	}
	return (NULL);
}
