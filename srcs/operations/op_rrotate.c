/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdg <kdg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 19:42:05 by kdg               #+#    #+#             */
/*   Updated: 2026/03/22 19:56:01 by kdg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	t_node	*cur;

	if (a->size <2)
		return ;
	cur = a->top;
	while (cur->next->next)
		cur = cur->next;
	cur->next->next = a->top;
	a->top = cur->next;
	cur->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	t_node	*cur;

	if (b->size <2)
		return ;
	cur = b->top;
	while (cur->next->next)
		cur = cur->next;
	cur->next->next = b->top;
	b->top = cur->next;
	cur->next = NULL;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	t_node	*cur;

	if (a->size >= 2)
	{
		cur = a->top;
		while (cur->next->next)
			cur = cur->next;
		cur->next->next = a->top;
		a->top = cur->next;
		cur->next = NULL;
	}
	if (b->size >= 2)
	{
		cur = b->top;
		while (cur->next->next)
			cur = cur->next;
		cur->next->next = b->top;
		b->top = cur->next;
		cur->next = NULL;
	}
	write(1, "rrr\n", 4);
}
