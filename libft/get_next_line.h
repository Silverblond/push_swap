/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 22:17:53 by dkim              #+#    #+#             */
/*   Updated: 2025/12/26 01:30:16 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

int		gnl_strlen(char *str);
char	*gnl_strdup(char *str);
char	*gnl_strchr(char *str, char c);
char	*gnl_substr(char *str, size_t len);
char	*gnl_strjoin(char *str1, char *str2);

char	*set_line(char **line_buffer);
char	*fill_line_buffer(int fd, char *left_str, char *buffer);
char	*get_next_line(int fd);
#endif