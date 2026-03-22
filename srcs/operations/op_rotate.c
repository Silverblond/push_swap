/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdg <kdg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 18:52:31 by kdg               #+#    #+#             */
/*   Updated: 2026/03/23 00:01:02 by kdg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack *a)
{
    t_node  *cur;
    if (a->size < 2)
        return ;
    cur = a->top;
    while (cur->next)
        cur = cur->next;
    cur->next = a->top;
    a->top = a->top->next;
    cur->next->next = NULL;
    write(1, "ra\n", 3);
}

void    rb(t_stack *b)
{
    t_node  *cur;
    if (b->size < 2)
        return ;
    cur = b->top;
    while (cur->next)
        cur = cur->next;
    cur->next = b->top;
    b->top = b->top->next;
    cur->next->next = NULL;
    write(1, "rb\n", 3);
}

void    rr(t_stack *a, t_stack *b)
{
    t_node  *cur;

    if (a->size >= 2)
    {
        cur = a->top;
        while (cur->next)
            cur = cur->next;
        cur->next = a->top;
        a->top = a->top->next;
        cur->next->next = NULL;
    }
    if (b->size >= 2)
    {
        cur = b->top;
        while (cur->next)
            cur = cur->next;
        cur->next = b->top;
        b->top = b->top->next;
        cur->next->next = NULL;
    }
    write(1, "rr\n", 3);
}
