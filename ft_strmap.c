/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:52:05 by ambombaa          #+#    #+#             */
/*   Updated: 2018/05/18 14:31:14 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newer;
	int		v;

	if (!s)
		return (NULL);
	if (!(newer = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	v = 0;
	while (*s)
	{
		newer[v++] = (*f)(*s);
		s++;
	}
	newer[v] = '\0';
	return (newer);
}
