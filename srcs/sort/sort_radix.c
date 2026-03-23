/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:47:57 by kdg               #+#    #+#             */
/*   Updated: 2026/03/23 21:27:06 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(int size)
{
	int	bits;

	bits = 0;
	while ((1 << bits) < size)
		bits++;
	return (bits);
}

/*
	1. find max bits of index(get_max_bits)
	2. for each bit, 0 -> pb(push to b), 1 -> ra(ratate a)
	3. push back (pa)
*/
void	sort_radix(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	size = a->size;
	max_bits = get_max_bits(size);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((a->top->index >> i) & 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (b->size > 0)
			pa(a, b);
		i++;
	}
}
