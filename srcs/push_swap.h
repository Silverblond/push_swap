/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 17:23:23 by kdg               #+#    #+#             */
/*   Updated: 2026/03/23 21:39:08 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	sa(t_stack *s);
void	sb(t_stack *s);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

t_stack	*new_stack(void);
void	push_node(t_stack *s, int value);
void	free_stack(t_stack *s);
int		is_sorted(t_stack *s);
void	set_index(t_stack *s);

void	parse(int argc, char **argv, t_stack *s);
void	split_push(char *str, t_stack *s);
void	error_exit(t_stack *a, t_stack *b);
void	free_and_exit(char **words, t_stack *s);
void	free_word(char **words);
char	**ft_split(char const *s, char c);
void	push_node(t_stack *s, int value);
void	free_stack(t_stack *s);

void	sort_2(t_stack *a);
void	sort_3(t_stack *a);
void	sort_5(t_stack *a, t_stack *b);
void	sort_radix(t_stack *a, t_stack *b);

#endif