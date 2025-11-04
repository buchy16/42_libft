/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:08:26 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/13 13:08:26 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *string, int element, size_t o_count)
{
	unsigned char	*u_string;
	unsigned char	u_element;
	size_t			i;

	u_string = (unsigned char *)string;
	u_element = (unsigned char)element;
	i = 0;
	while (i < o_count)
	{
		if (u_string[i] == u_element)
			return (u_string + i);
		i++;
	}
	return (NULL);
}
