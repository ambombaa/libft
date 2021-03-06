/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 13:47:36 by ambombaa          #+#    #+#             */
/*   Updated: 2018/05/18 14:05:20 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t m;

	m = 0;
	while (m < n)
	{
		*(unsigned char*)(dst + m) = *(unsigned char*)(src + m);
		if (*(unsigned char*)(src + m) == (unsigned char)c)
			return (dst + m + 1);
		m++;
	}
	return (NULL);
}
