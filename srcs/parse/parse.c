/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 20:19:34 by kdg               #+#    #+#             */
/*   Updated: 2026/03/23 21:26:02 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	parse_push(int argc, char **argv, t_stack *s)
{
	int	i;

	i = argc - 1;
	while (i >= 1)
	{
		split_push(argv[i], s);
		i--;
	}
}

void	parse(int argc, char **argv, t_stack *s)
{
	if (argc < 2)
		return ;
	parse_push(argc, argv, s);
}
