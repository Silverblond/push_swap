/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:48:11 by kdg               #+#    #+#             */
/*   Updated: 2026/03/23 21:29:51 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	1. find 0,1(ra,rra) and push to b (pb)
	2. sort 3 in a (sort_3)
	3. push back (pa,pa)
*/

static int	find_pos(t_stack *s, int target_index)
{
	t_node	*cur;
	int		pos;

	cur = s->top;
	pos = 0;
	while (cur)
	{
		if (cur->index == target_index)
			return (pos);
		cur = cur->next;
		pos++;
	}
	return (-1);
}

static void	find_01(t_stack *a, t_stack *b, int target_index)
{
	int	pos;

	pos = find_pos(a, target_index);
	if (pos <= a->size / 2)
	{
		while (pos--)
			ra(a);
	}
	else
	{
		while (pos++ < a->size)
			rra(a);
	}
	pb(a, b);
}

void	sort_5(t_stack *a, t_stack *b)
{
	if (a->size == 4)
	{
		find_01(a, b, 0);
		sort_3(a);
		pa(a, b);
		return ;
	}
	find_01(a, b, 0);
	find_01(a, b, 1);
	sort_3(a);
	if (b->top->index < b->top->next->index)
		sb(b);
	pa(a, b);
	pa(a, b);
}
