/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <kmabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 19:27:35 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/12/17 21:24:10 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_hex_long(unsigned long nb)
{	
	int		j;
	char	*str;

	j = 0;
	str = "0123456789abcdef";
	if (nb < 16)
	{
		write(1, &str[nb], 1);
		j++;
	}
	else
	{
		j += ft_put_hex_long(nb / 16);
		j += ft_put_hex_long(nb % 16);
	}
	return (j);
}

int	ft_putvoid(void *ptr)
{
	unsigned long	a;
	int				len;

	len = 0;
	a = (unsigned long)ptr;
	write(1, "0x", 2);
	len = ft_put_hex_long(a);
	len += 2;
	return (len);
}
