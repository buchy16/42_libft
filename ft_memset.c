/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:08:47 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/13 13:08:47 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int element, size_t count)
{
	unsigned char	byte_to_copy;
	unsigned char	*ptr2;
	size_t			i;

	byte_to_copy = element;
	ptr2 = (unsigned char *)ptr;
	i = 0;
	while (i < count)
	{
		ptr2[i] = byte_to_copy;
		i++;
	}
	return (ptr2);
}
