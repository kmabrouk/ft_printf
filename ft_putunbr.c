/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 23:46:36 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/12/17 21:23:47 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	long	nb;
	char	c;
	int		len;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
		len++;
	}
	else
	{
		len += ft_putunbr(nb / 10);
		len += ft_putunbr(nb % 10);
	}
	return (len);
}
