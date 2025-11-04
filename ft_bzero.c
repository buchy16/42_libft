/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:14:22 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/21 16:14:22 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *ptr, size_t o_count)
{
	unsigned char	nul;
	unsigned char	*ptr2;
	size_t			i;

	ptr2 = (unsigned char *)ptr;
	nul = 0;
	i = 0;
	while (i < o_count)
	{
		ptr2[i] = nul;
		i++;
	}
}
