/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 23:33:03 by kdg               #+#    #+#             */
/*   Updated: 2025/07/26 17:03:43 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(const char *str)
{
	int		result;
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	if (!str)
	{
		result = write(1, "(null)", 6);
		if (result == -1)
			return (-1);
		len += result;
		return (len);
	}
	while (str[i] != '\0')
	{
		result = print_char(str[i]);
		if (result == -1)
			return (-1);
		len += result;
		i++;
	}
	return (len);
}
