/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkim <dkim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 15:17:05 by dkim              #+#    #+#             */
/*   Updated: 2025/12/26 01:29:50 by dkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

int	ft_printf(const char *format, ...);

int	print_char(int c);
int	print_str(const char *str);
int	print_nbr(int n);
int	print_unsigned(unsigned int n);
int	print_hex(unsigned int n, int check);
int	print_hex_long(unsigned long n);
int	print_ptr(void *ptr);
int	print_pct(void);

int	check_error(int *len, int result);

#endif