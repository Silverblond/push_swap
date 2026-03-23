/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdg <kdg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:48:11 by kdg               #+#    #+#             */
/*   Updated: 2026/03/23 19:42:29 by kdg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	1. find 0,1(ra,rra) and push to b (pb)
	2. sort 3 in a (sort_3)
	3. push back (pa,pa)
*/

static void find_01(t_stack *a, t_stack *b, int target_index)
{
	int	i;
	int	size;

	size = a->size;
	i = 0;
	while (a->top->index != target_index)
	{
		if (i < size / 2)
			ra(a);
		else
			rra(a);
		i++;
	}
	pb(a, b);
}

void	sort_5(t_stack *a, t_stack *b)
{
	find_01(a, b, 0);
	find_01(a, b, 1);
	sort_3(a);
	if (b->top->index < b->top->next->index)
		sb(b);
	pa(a, b);
	pa(a, b);
}
