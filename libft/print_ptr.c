/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 23:33:06 by kdg               #+#    #+#             */
/*   Updated: 2025/07/26 17:03:24 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(void *ptr)
{
	unsigned long	add;
	int				len;

	if (ptr == NULL)
		return (print_str("(nil)"));
	add = (unsigned long)ptr;
	len = 0;
	len += print_str("0x");
	len += print_hex_long(add);
	return (len);
}
