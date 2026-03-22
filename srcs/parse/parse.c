/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdg <kdg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 20:19:34 by kdg               #+#    #+#             */
/*   Updated: 2026/03/22 22:28:28 by kdg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse(int argc, char **argv, t_stack *s)
{
	int		i;
	long	value;

	i = 1;
	while (i < argc)
	{
		if (!is_valid_int(argv[i]))
			error_exit(s, NULL);
		value = ft_atoi(argv[i]);
		if (value > 214783647 || value < -2147483648)
			error_exit(s, NULL);
		i++;
	}

	i = argc - 1;
	while (i >= 1)
	{
		value = ft_atoi(argv[i]);
		if (is_duplicate(s, (int)value))
			error_exit(s, NULL);
		push_node(s, (int)value);
		i--;
	}
}
