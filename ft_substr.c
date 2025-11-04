/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:25:46 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/22 18:26:51 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *string, unsigned int start, size_t len)
{
	char	*result;
	size_t	str_lenght;
	size_t	l_start;

	l_start = (size_t)start;
	str_lenght = ft_strlen(string);
	result = NULL;
	if (l_start > str_lenght)
	{
		len = 0;
		l_start = 0;
	}
	else if (len > str_lenght - l_start)
		len = str_lenght - l_start;
	result = malloc(sizeof(char) * (len) + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, (char *)(string + (l_start)), len + 1);
	return (result);
}
