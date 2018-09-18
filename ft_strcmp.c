/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:38:20 by ambombaa          #+#    #+#             */
/*   Updated: 2018/05/18 14:21:48 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int c;

	c = 0;
	while (*(unsigned char*)(s1 + c) || *(unsigned char*)(s2 + c))
	{
		if (*(unsigned char*)(s1 + c) != *(unsigned char*)(s2 + c))
			return (*(unsigned char*)(s1 + c) - *(unsigned char*)(s2 + c));
		c++;
	}
	return (0);
}
