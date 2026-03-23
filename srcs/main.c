/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdg <kdg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 02:59:41 by kdg               #+#    #+#             */
/*   Updated: 2026/03/23 17:47:49 by kdg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void print_stack(t_stack *s, char *name)
{
    t_node  *cur;

    printf("=== stack %s (size: %d) ===\n", name, s->size);
    cur = s->top;
    while (cur)
    {
        printf("[%d] ", cur->value);
        cur = cur->next;
    }
    printf("\n");
}

// #include "push_swap.h"

// int main(int argc, char **argv)
// {
//     t_stack *a;
//     t_stack *tmp;
// 	t_stack *b;
// 	t_stack *tmp2;

//     a = (t_stack *)malloc(sizeof(t_stack));
//     a->size=0;
//     a->top=NULL;
//     parse(argc, argv, a);

//     tmp = a;
// 	b = (t_stack *)malloc(sizeof(t_stack));
// 	b->size=0;
// 	b->top=NULL;
// 	tmp2 = b;
//     while (tmp->top){
//         printf("val = %d\n", tmp->top->value);
//         tmp->top = tmp->top->next;
//     }
//     while (tmp2->top){
//         printf("val = %d\n", tmp2->top->value);
//         tmp2->top = tmp2->top->next;
//     }
//     return (0);
// }