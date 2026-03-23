/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdg <kdg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 23:04:16 by kdg               #+#    #+#             */
/*   Updated: 2026/03/23 17:47:53 by kdg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *s)
{
	t_node	*cur;

	cur = s->top;
	while (cur && cur->next)
	{
		if (cur->index > cur->next->index)
			return (0);
		cur = cur->next;
	}
	return (1);
}

void	set_index(t_stack *s)
{
	t_node	*node;
	t_node	*tmp;
	int		index;

	node = s->top;
	while (node)
	{
		index = 0;
		tmp = s->top;
		while (tmp)
		{
			if (tmp->value < node->value)
				index++;
			tmp = tmp->next;
		}
		node->index = index;
		node = node->next;
	}
}
