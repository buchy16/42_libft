/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:52:21 by nbuchy            #+#    #+#             */
/*   Updated: 2025/11/04 09:37:22 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**free_if_error(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	count_words(char const *s, char sep)
{
	int	i;
	int	count;
	int	bool;

	i = 0;
	count = 0;
	bool = 0;
	if (ft_strlen(s) == 0)
		return (count);
	while (s[i] != 0)
	{
		if ((s[i] == sep || s[i + 1] == 0) && bool == 1)
		{
			count++;
			bool = 0;
		}
		if (s[i] != sep)
			bool = 1;
		i++;
	}
	return (count);
}

static char	**extract_words(char **result, char const *s, char c)
{
	int	tab_i;
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab_i = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			while (s[i + j] != c && s[i + j] != 0)
				j++;
			result[tab_i] = ft_substr(s, i, j);
			if (result[tab_i] == NULL)
				return (free_if_error(result));
			i = i + j;
			j = 0;
			tab_i++;
		}
		else
			i++;
	}
	result[tab_i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	result = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	return (extract_words(result, s, c));
}
