/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:08:42 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/13 13:08:42 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t o_count)
{
	unsigned char	*u_dest;
	unsigned char	*u_source;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	u_dest = (unsigned char *)dest;
	u_source = (unsigned char *)src;
	i = 0;
	if (u_dest >= u_source)
	{
		u_dest += (o_count - 1);
		i = o_count;
		while (i > 0)
		{
			i--;
			*u_dest = u_source[i];
			u_dest--;
		}
	}
	else
		ft_memcpy(u_dest, u_source, o_count);
	return (dest);
}
