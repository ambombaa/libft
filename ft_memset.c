/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 13:50:49 by ambombaa          #+#    #+#             */
/*   Updated: 2018/05/22 16:03:43 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t s;

	s = 0;
	while (s < len)
	{
		*(unsigned char*)(b + s) = (unsigned char)c;
		s++;
	}
	return (b);
}
