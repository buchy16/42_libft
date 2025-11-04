/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:45:07 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/22 16:20:04 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int		i;
	char	*last_ptr;
	char	searched_char;

	searched_char = (char)c;
	i = 0;
	last_ptr = NULL;
	while (string[i] != 0)
	{
		if (string[i] == searched_char)
			last_ptr = (char *)(string + i);
		i++;
	}
	if (string[i] == 0 && searched_char == 0)
		return ((char *)(string + i));
	return (last_ptr);
}
