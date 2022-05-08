/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_Upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:50:39 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/12/17 19:51:32 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa_upper(unsigned int n, int *len)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (n < 16)
	{
		write(1, &str[n], 1);
		*len += 1;
	}
	else
	{
		ft_print_hexa_upper(n / 16, len);
		ft_print_hexa_upper(n % 16, len);
	}
}
