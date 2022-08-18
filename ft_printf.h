/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:50:15 by mle-biha          #+#    #+#             */
/*   Updated: 2022/08/18 11:57:05 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# define FT_PRINTF_H

int		ft_printf(const char *s, ...);
int		ft_putchar(int c);
int		ft_puthexa(int nb, char *base);
int		ft_putnbr(int n);
int		ft_putpointer(va_list arg, char *base);
int		ft_putstr(char *s);
int		ft_putunsigned(unsigned int n);

#endif
