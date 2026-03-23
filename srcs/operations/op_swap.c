/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 18:42:18 by kdg               #+#    #+#             */
/*   Updated: 2026/03/23 21:25:10 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	t_node	*tmp;

	if (a->size < 2)
		return ;
	tmp = a->top->next;
	a->top->next = tmp->next;
	tmp->next = a->top;
	a->top = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	t_node	*tmp;

	if (b->size < 2)
		return ;
	tmp = b->top->next;
	b->top->next = tmp->next;
	tmp->next = b->top;
	b->top = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (a->size >= 2)
	{
		tmp = a->top->next;
		a->top->next = tmp->next;
		tmp->next = a->top;
		a->top = tmp;
	}
	if (b->size >= 2)
	{
		tmp = b->top->next;
		b->top->next = tmp->next;
		tmp->next = b->top;
		b->top = tmp;
	}
	write(1, "ss\n", 3);
}
