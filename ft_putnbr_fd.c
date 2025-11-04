/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:10:20 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/27 15:27:25 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char		number;
	long long	n2;

	n2 = (long long)n;
	number = 0;
	if (n2 < 0)
	{
		n2 *= -1;
		write(fd, "-", 1);
	}
	if (n2 >= 10)
		ft_putnbr_fd(n2 / 10, fd);
	number = (n2 % 10) + 48;
	write(fd, &number, 1);
}
