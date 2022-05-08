/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:21:37 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/12/11 23:52:51 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexa(unsigned int nb, int *len)
{	
	char	*str;

	str = "0123456789abcdef";
	if (nb < 16)
	{
		write(1, &str[nb], 1);
		*len = *len + 1;
	}
	else
	{
		ft_printhexa(nb / 16, len);
		ft_printhexa(nb % 16, len);
	}
}
