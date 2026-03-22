/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdg <kdg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 18:37:45 by kdg               #+#    #+#             */
/*   Updated: 2026/03/22 18:52:02 by kdg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (b->size == 0)
		return ;
	tmp = b->top;
	b->top = b->top->next;
	b->size--;
	tmp->next = a->top;
	a->top = tmp;
	a->size++;
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (a->size == 0)
		return ;
	tmp = a->top;
	a->top = a->top->next;
	a->size--;
	tmp->next = b->top;
	b->top = tmp;
	b->size++;
	write(1, "pb\n", 3);
}
