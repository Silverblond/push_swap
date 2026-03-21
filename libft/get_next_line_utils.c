/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 22:18:02 by dkim              #+#    #+#             */
/*   Updated: 2025/08/13 23:20:20 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	gnl_strlen(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*gnl_strdup(char *str)
{
	size_t		i;
	char		*p;

	i = 0;
	p = (char *)malloc(sizeof(char) * (gnl_strlen(str) + 1));
	if (!p)
		return (NULL);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*gnl_strchr(char *str, char c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}

char	*gnl_substr(char *str, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*sub_str;

	if (!str)
		return (NULL);
	str_len = gnl_strlen(str);
	if (str_len < len)
		len = str_len;
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_str[i] = str[i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

char	*gnl_strjoin(char *str1, char *str2)
{
	size_t	i;
	size_t	index;
	size_t	len1;
	size_t	len2;
	char	*ret;

	len1 = gnl_strlen(str1);
	len2 = gnl_strlen(str2);
	ret = (char *)malloc(len1 + len2 + 1);
	if (!ret)
		return (NULL);
	i = 0;
	index = 0;
	while (i < len1)
		ret[index++] = str1[i++];
	i = 0;
	while (i < len2)
		ret[index++] = str2[i++];
	ret[index] = '\0';
	return (ret);
}
