/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:18:12 by dkim              #+#    #+#             */
/*   Updated: 2025/07/16 17:47:23 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	flag(char type, va_list args)
{
	if (type == 'c')
		return (print_char(va_arg(args, int)));
	else if (type == 's')
		return (print_str(va_arg(args, char *)));
	else if (type == 'p')
		return (print_ptr(va_arg(args, void *)));
	else if (type == 'd' || type == 'i')
		return (print_nbr(va_arg(args, int)));
	else if (type == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	else if (type == 'x')
		return (print_hex(va_arg(args, unsigned int), type));
	else if (type == 'X')
		return (print_hex(va_arg(args, unsigned int), type));
	else if (type == '%')
		return (print_pct());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	arg;

	i = 0;
	len = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len += flag(format[i + 1], arg);
			i++;
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(arg);
	return (len);
}
