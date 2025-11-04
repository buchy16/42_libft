/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:12:35 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/22 16:23:15 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int		i;
	char	searched_char;

	searched_char = (char)c;
	i = 0;
	while (string[i] != 0)
	{
		if (string[i] == searched_char)
			return ((char *)(string + i));
		i++;
	}
	if (string[i] == 0 && searched_char == 0)
		return ((char *)(string + i));
	return (NULL);
}
