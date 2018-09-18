/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:02:03 by ambombaa          #+#    #+#             */
/*   Updated: 2018/05/18 15:02:43 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	u;
	int v;
	int len;

	u = 0;
	v = 0;
	len = 0;
	while (s2[len])
		len++;
	if (len == 0)
		return ((char*)s1);
	while (s1[u])
	{
		while (s2[v] && s2[v] == s1[u + v])
			v++;
		if (s2[v] == '\0')
			return ((char *)(s1 + u));
		v = 0;
		u++;
	}
	return (NULL);
}
