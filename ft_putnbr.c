/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambombaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 14:13:02 by ambombaa          #+#    #+#             */
/*   Updated: 2018/06/06 11:44:24 by ambombaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	t[10];
	int		i;
	long	number;

	i = 0;
	number = n;
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number == 0)
		ft_putchar('0');
	while (number > 0)
	{
		t[i] = number % 10 + '0';
		number = number / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(t[i]);
		i--;
	}
}
