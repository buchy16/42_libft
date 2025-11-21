/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:11:11 by nbuchy            #+#    #+#             */
/*   Updated: 2025/11/21 10:13:57 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_new_line(char *string)
{
	int	i;

	i = 0;
	if (string == NULL)
		return (0);
	while (string[i] != '\n' && string[i] != 0)
		i++;
	return (string[i] == '\n');
}

char	*buffer_cleaner(char *buffer, char **static_var)
{
	int		i;
	int		j;
	char	*cleaned_buf;
	char	*temp;

	i = 0;
	j = 0;
	if (buffer == NULL)
		return (NULL);
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	cleaned_buf = ft_substr(buffer, 0, i + 1);
	if (buffer[i] == '\n')
	{
		temp = *static_var;
		while (buffer[i + j] != '\0')
			j++;
		*static_var = ft_substr(buffer, i + 1, j - 1);
		free(temp);
	}
	return (cleaned_buf);
}

char	*extract_static_char(char *static_var, char **final_line)
{
	int		i;
	int		j;
	char	*new_static;

	i = 0;
	j = 0;
	new_static = NULL;
	if (ft_strlen(static_var) == 0)
		return (new_static);
	while (static_var[i] != '\n' && static_var[i] != '\0')
		i++;
	*final_line = ft_substr(static_var, 0, i + 1);
	if (static_var[i] == '\n')
	{
		i++;
		while (static_var[i + j] != 0)
			j++;
		new_static = ft_substr(static_var, i, j);
		free(static_var);
		return (new_static);
	}
	free(static_var);
	return (NULL);
}

char	*add_to_final_line(char *buffer, char **final_line, char *static_str)
{
	char	*old_final_line;
	char	*cleaned_buffer;

	old_final_line = *final_line;
	cleaned_buffer = buffer_cleaner(buffer, &static_str);
	*final_line = ft_strjoin(*final_line, cleaned_buffer);
	ft_bzero(buffer, BUFFER_SIZE + 1);
	free(old_final_line);
	free(cleaned_buffer);
	return (static_str);
}

char	*get_next_line(int fd)
{
	char		*final_line;
	char		buffer[BUFFER_SIZE + 1];
	static char	*static_str;
	int			bool;

	final_line = NULL;
	bool = 1;
	ft_bzero(buffer, BUFFER_SIZE + 1);
	static_str = extract_static_char(static_str, &final_line);
	while (find_new_line(final_line) == 0 && bool != 0)
	{
		bool = read(fd, buffer, BUFFER_SIZE);
		if (bool <= 0)
			break ;
		static_str = add_to_final_line(buffer, &final_line, static_str);
	}
	if (ft_strlen(static_str) == 0)
	{
		free(static_str);
		static_str = NULL;
	}
	return (final_line);
}
