/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: it <it@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:08:14 by it                #+#    #+#             */
/*   Updated: 2025/05/06 15:23:39 by it               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(long num)
{
	size_t	digit;

	digit = 1;
	while (num >= 10)
	{
		num /= 10;
		digit++;
	}
	return (digit);
}

static char	*convert_num(char *res, long num, size_t len, int sign)
{
	while (len-- > (size_t)sign)
	{
		res[len] = (num % 10) + '0';
		num /= 10;
	}
	if (sign)
		res[0] = '-';
	return (res);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		sign;
	long	number;
	size_t	digit;
	size_t	i;

	sign = 0;
	number = (long)n;
	if (number < 0)
	{
		sign = 1;
		number = -number;
	}
	digit = count_digits(number);
	result = (char *)malloc(sizeof(char) * (digit + sign + 1));
	if (!result)
		return (0);
	i = digit + sign;
	result[i] = '\0';
	result = convert_num(result, number, i, sign);
	return (result);
}
