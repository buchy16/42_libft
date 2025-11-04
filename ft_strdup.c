/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:40:55 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/17 09:24:27 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *source)
{
	char	*string_copied;
	size_t	size;

	string_copied = NULL;
	size = ft_strlen(source) + 1;
	string_copied = malloc(size);
	if (string_copied == NULL)
		return (NULL);
	ft_memcpy(string_copied, (char *)source, size);
	return (string_copied);
}
