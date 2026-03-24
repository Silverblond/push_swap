/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdg <kdg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:01:25 by it                #+#    #+#             */
/*   Updated: 2026/03/24 09:38:24 by kdg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_word(const char *s, char c)
{
	size_t	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!flag)
			{
				count++;
				flag = 1;
			}
		}
		else
			flag = 0;
		s++;
	}
	return (count);
}

static char	*word_copy(char const *start, char const *end)
{
	size_t	len;
	char	*word;
	char	*str;

	len = end - start;
	word = (char *)malloc(len + 1);
	if (!word)
		return (0);
	str = word;
	while (start < end)
		*str++ = *start++;
	*str = '\0';
	return (word);
}

static char	**free_all(char **result, size_t count)
{
	while (count--)
		free(result[count]);
	free(result);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	index;
	char	*start;
	char	**result;

	result = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!result)
		return (0);
	index = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			result[index] = word_copy(start, s);
			if (!result[index++])
				return (free_all(result, index));
		}
		else
			s++;
	}
	result[index] = 0;
	return (result);
}
