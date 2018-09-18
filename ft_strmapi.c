/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:52:41 by ambombaa          #+#    #+#             */
/*   Updated: 2018/05/18 14:32:04 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newer;
	unsigned int	v;

	if (!s)
		return (NULL);
	v = 0;
	if (!(newer = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[v])
	{
		newer[v] = (*f)(v, s[v]);
		v++;
	}
	newer[v] = '\0';
	return (newer);
}
