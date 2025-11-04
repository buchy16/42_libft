/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:08:32 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/13 13:08:32 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t o_count)
{
	unsigned char	*u_ptr1;
	unsigned char	*u_ptr2;
	size_t			i;

	u_ptr1 = (unsigned char *)ptr1;
	u_ptr2 = (unsigned char *)ptr2;
	i = 0;
	while (i < o_count)
	{
		if (u_ptr1[i] != u_ptr2[i])
			return (u_ptr1[i] - u_ptr2[i]);
		i++;
	}
	return (0);
}
