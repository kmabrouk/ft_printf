/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <kmabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:52:39 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/12/17 21:22:02 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_print_pourcentage(void);

int		ft_putnbr(int n);
void	ft_printhexa(unsigned int nb, int *len);
int		ft_putunbr(unsigned int n);
int		ft_print_pourcentage(void);
int		ft_putvoid(void *ptr);
void	ft_print_hexa_upper(unsigned int i, int *len);

#endif
