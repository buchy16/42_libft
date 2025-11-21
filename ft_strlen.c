/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:10:06 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/13 13:10:06 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str != NULL && str[i])
		i++;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Fonction original = [%lu]\n", strlen(""));
// 	//il est dit dans le man que strlen renvoie un size_t, 
//	//bien que l'exemple au dessus revoie un u
// 	printf("Ma fonction = [%zu]\n", ft_strlen(""));
// 	return (0);
// }