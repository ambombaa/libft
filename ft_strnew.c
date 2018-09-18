/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:55:40 by ambombaa          #+#    #+#             */
/*   Updated: 2018/05/18 14:39:31 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*nouveau;

	if (!(nouveau = (char*)malloc(sizeof(*nouveau) * (size + 1))))
		return (NULL);
	nouveau = (char*)ft_memset(nouveau, 0, size + 1);
	return (nouveau);
}
