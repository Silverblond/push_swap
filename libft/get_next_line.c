/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 22:17:59 by dkim              #+#    #+#             */
/*   Updated: 2025/08/13 23:48:10 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*set_line(char **line_buffer)
{
	char	*comp_line;
	char	*end_of_line;
	char	*temp;

	if (!*line_buffer || (*line_buffer)[0] == '\0')
	{
		return (free(*line_buffer), *line_buffer = NULL, NULL);
	}
	end_of_line = gnl_strchr(*line_buffer, '\n');
	if (end_of_line)
	{
		comp_line = gnl_substr(*line_buffer, end_of_line - *line_buffer + 1);
		temp = gnl_substr(end_of_line + 1, gnl_strlen(end_of_line + 1));
		free(*line_buffer);
		*line_buffer = temp;
		if (!comp_line || !(*line_buffer))
		{
			free(comp_line);
			free(*line_buffer);
			return (*line_buffer = NULL, NULL);
		}
		return (comp_line);
	}
	comp_line = *line_buffer;
	return (*line_buffer = NULL, comp_line);
}

char	*fill_line_buffer(int fd, char *left_str, char *buffer)
{
	char	*temp;
	int		byte_read;

	if (!left_str)
		left_str = gnl_strdup("");
	if (!left_str)
		return (NULL);
	byte_read = 1;
	while (!gnl_strchr(left_str, '\n') && byte_read > 0)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
			return (free(left_str), NULL);
		if (byte_read == 0)
			break ;
		buffer[byte_read] = '\0';
		temp = gnl_strjoin(left_str, buffer);
		free(left_str);
		left_str = temp;
		if (!left_str)
			return (NULL);
	}
	return (left_str);
}

char	*get_next_line(int fd)
{
	static char	*leftover;
	char		*buffer;
	char		*print_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	leftover = fill_line_buffer(fd, leftover, buffer);
	free(buffer);
	if (!leftover)
		return (NULL);
	print_line = set_line(&leftover);
	return (print_line);
}
