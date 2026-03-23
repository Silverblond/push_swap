/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_23.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdg <kdg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 23:56:22 by kdg               #+#    #+#             */
/*   Updated: 2026/03/23 19:42:30 by kdg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *a)
{
	if (a->top->index > a->top->next->index)
		sa(a);
}

void	sort_3(t_stack *a)
{
	int top;
    int mid;
    int bot;

    top = a->top->index;
    mid = a->top->next->index;
    bot = a->top->next->next->index;
    if (top > mid && mid < bot && top < bot) //2 1 3
        sa(a);
    else if (top > mid && mid < bot && top > bot) //3 1 2
    {
        sa(a);
        rra(a);
    }
    else if (top > mid && mid < bot && top > bot) //3 2 1
		ra(a);
    else if (top < mid && mid > bot && top < bot) //1 3 2
    {
        sa(a);
        ra(a);
    }
    else if (top < mid && mid > bot && top > bot) //2 3 1
        rra(a);
}
