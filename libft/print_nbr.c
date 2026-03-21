/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 23:33:10 by kdg               #+#    #+#             */
/*   Updated: 2025/07/26 17:02:10 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int n)
{
	long	nbr;
	int		len;

	len = 0;
	nbr = (long)n;
	if (nbr < 0)
	{
		len += print_char('-');
		nbr *= -1;
	}
	if (nbr >= 10)
		len += print_nbr(nbr / 10);
	len += print_char(nbr % 10 + '0');
	return (len);
}
