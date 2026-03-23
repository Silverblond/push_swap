/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_23.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 23:56:22 by kdg               #+#    #+#             */
/*   Updated: 2026/03/23 21:32:05 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *a)
{
	if (a->top->index > a->top->next->index)
		sa(a);
}

/*
	1. 2 1 3 -> sa
	2. 3 1 2 -> ra
	3. 3 2 1 -> sa + rra
	4. 1 3 2 -> sa + ra
	5. 2 3 1 -> rra
*/

void	sort_3(t_stack *a)
{
	int	top;
	int	mid;
	int	bot;

	top = a->top->index;
	mid = a->top->next->index;
	bot = a->top->next->next->index;
	if (top > mid && mid < bot && top < bot)
		sa(a);
	else if (top > mid && mid < bot && top > bot)
		ra(a);
	else if (top > mid && mid > bot && top > bot)
	{
		sa(a);
		rra(a);
	}
	else if (top < mid && mid > bot && top < bot)
	{
		sa(a);
		ra(a);
	}
	else if (top < mid && mid > bot && top > bot)
		rra(a);
}
