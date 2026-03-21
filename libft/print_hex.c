/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 23:33:12 by kdg               #+#    #+#             */
/*   Updated: 2025/09/05 21:00:05 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_digit(unsigned int n, int check)
{
	if (n <= 9)
		return (print_char(n + '0'));
	else if (check == 'x')
		return (print_char(n - 10 + 'a'));
	else if (check == 'X')
		return (print_char(n - 10 + 'A'));
	return (0);
}

int	print_hex(unsigned int n, int check)
{
	int	len;
	int	result;

	len = 0;
	result = 0;
	if (n >= 16)
	{
		result = print_hex(n / 16, check);
		if (check_error(&len, result) == -1)
			return (-1);
		result = print_hex(n % 16, check);
		if (check_error(&len, result) == -1)
			return (-1);
	}
	else
	{
		result = print_hex_digit(n, check);
		if (check_error(&len, result) == -1)
			return (-1);
	}
	return (len);
}

int	print_hex_long(unsigned long n)
{
	int	len;
	int	result;

	len = 0;
	result = 0;
	if (n >= 16)
	{
		result = print_hex_long(n / 16);
		if (check_error(&len, result) == -1)
			return (-1);
		result = print_hex_long(n % 16);
		if (check_error(&len, result) == -1)
			return (-1);
	}
	else
	{
		if (n <= 9)
			result = print_char(n + '0');
		else
			result = print_char(n - 10 + 'a');
		if (check_error(&len, result) == -1)
			return (-1);
	}
	return (len);
}
