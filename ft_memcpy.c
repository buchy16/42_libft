/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:08:37 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/13 13:08:37 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t o_count)
{
	unsigned char	to_copy;
	unsigned char	*u_dest;
	unsigned char	*u_source;
	size_t			i;

	if (dest == NULL && source == NULL)
		return (NULL);
	u_dest = (unsigned char *)dest;
	u_source = (unsigned char *)source;
	i = 0;
	to_copy = 0;
	while (i < o_count)
	{
		to_copy = u_source[i];
		u_dest[i] = to_copy;
		i++;
	}
	return (u_dest);
}
