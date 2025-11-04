/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:08:20 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/13 13:08:20 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int letter)
{
	if (letter <= 31 || letter >= 127)
		return (0);
	if (letter >= 65 && letter <= 90)
		return (1);
	if (letter >= 97 && letter <= 122)
		return (2);
	if (letter >= 48 && letter <= 57)
		return (4);
	if (letter == 32)
		return (64);
	return (16);
}
