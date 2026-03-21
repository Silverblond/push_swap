/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 23:33:01 by kdg               #+#    #+#             */
/*   Updated: 2025/07/26 17:04:09 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	int	len;
	int	result;

	len = 0;
	if (n >= 10)
	{
		result = print_unsigned(n / 10);
		if (result == -1)
			return (-1);
		len += result;
		result = print_unsigned(n % 10);
		if (result == -1)
			return (-1);
		len += result;
	}
	else
	{
		result = print_char(n + '0');
		if (result == -1)
			return (-1);
		len += result;
	}
	return (len);
}
