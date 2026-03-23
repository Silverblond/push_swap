/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdg <kdg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 20:45:33 by kdg               #+#    #+#             */
/*   Updated: 2026/03/23 20:44:43 by kdg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_valid_int(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	is_duplicate(t_stack *s, int value)
{
	t_node	*cur;

	if (!s || s->size == 0)
		return (0);
	cur = s->top;
	while(cur)
	{
		if (cur->value == value)
			return (1);
		cur = cur->next;
	}
	return (0);
}

static long	ft_atoi(char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
void	free_word(char **words)
{
	int	i;

	i = 0;
	while (words[i])
	{
		free(words[i++]);
	}
	free(words);
}

//길이 줄이기
void	split_push(char *str, t_stack *s)
{
	char	**words;
	int		i;
	long	value;
	int		len;

	words = ft_split(str, ' ');
	if (!words)
		error_exit(s, NULL);
	len = 0;
	while (words[len])
		len++;
	i = len - 1;
	while (i >= 0)
	{
		if (!is_valid_int(words[i]))
		{
			free_word(words);
			error_exit(s, NULL);
		}
		value = ft_atoi(words[i]);
		if (value > 2147483647 || value < -2147483648)
		{
			free_word(words);
			error_exit(s, NULL);
		}
		if (is_duplicate(s, (int)value))
		{
			free_word(words);
			error_exit(s, NULL);
		}
		push_node(s, (int)value);
		i--;
	}
	free_word(words);
}
