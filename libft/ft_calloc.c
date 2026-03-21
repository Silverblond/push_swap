/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: it <it@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 23:14:49 by it                #+#    #+#             */
/*   Updated: 2025/05/06 00:51:11 by it               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	total;

	if (size != 0 && num > ((size_t)-1 / size))
		return (0);
	total = num * size;
	ptr = malloc(total);
	if (!ptr)
		return (0);
	ft_bzero(ptr, num * size);
	return (ptr);
}
