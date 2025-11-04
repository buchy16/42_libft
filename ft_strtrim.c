/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:05:53 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/22 11:57:00 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	in_set(char element, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (element == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	trim_count_left(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (in_set(s1[i], set) == 1 && s1[i] != 0)
	{
		count++;
		i++;
	}
	return (count);
}

static int	trim_count_right(char const *s1, char const *set, int s1_len)
{
	int	i;
	int	count;

	i = s1_len - 1;
	count = 0;
	while (in_set(s1[i], set) == 1 && i > 0)
	{
		count++;
		i--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_len;
	int		homeless_letters;
	int		homeless_letters_l;
	char	*result;

	homeless_letters = 0;
	homeless_letters_l = 0;
	s1_len = ft_strlen(s1);
	homeless_letters_l = trim_count_left(s1, set);
	homeless_letters = homeless_letters_l;
	if (s1[homeless_letters] != 0)
		homeless_letters += trim_count_right(s1, set, s1_len);
	result = malloc(s1_len - homeless_letters + 1);
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1 + homeless_letters_l, s1_len - homeless_letters);
	result[s1_len - homeless_letters] = 0;
	return (result);
}
