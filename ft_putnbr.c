/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:31:31 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/12/17 21:23:05 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	c;
	long	nb;
	int		len;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		len++;
	}
	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
		len++;
	}
	else
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	return (len);
}
