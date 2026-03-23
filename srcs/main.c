/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdg <kdg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 02:59:41 by kdg               #+#    #+#             */
/*   Updated: 2026/03/23 20:30:03 by kdg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;

	if (argc < 2)
		return (0);
	a = new_stack();
	b = new_stack();
	parse(argc, argv, a);
	set_index(a);
	if (!is_sorted(a))
	{
		if (a->size == 2)
			sort_2(a);
		else if (a->size == 3)
			sort_3(a);
		else if (a->size <= 5)
			sort_5(a, b);
		else
			sort_radix(a, b);
	}
	free_stack(a);
	free_stack(b);
	return (0);
}
