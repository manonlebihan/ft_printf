/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:00:39 by mle-biha          #+#    #+#             */
/*   Updated: 2022/08/18 13:07:13 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_arg_type(char c, int size, va_list arg)
{
	if (c == 'c')
		size += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		size += ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
		size += ft_putpointer(arg, "0123456789abcdef");
	else if (c == 'd' || c == 'i')
		size += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		size += ft_putunsigned(va_arg(arg, unsigned int));
	else if (c == 'x')
		size += ft_puthexa(va_arg(arg, int), "0123456789abcdef");
	else if (c == 'X')
		size += ft_puthexa(va_arg(arg, int), "0123456789ABCDEF");
	else if (c == '%')
		size += ft_putchar('%');
	return (size);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;

	va_start(args, s);
	// CODE HERE
	va_end(args);
}

int	main(void)
{
	char	c;

	c = 'm';
	printf("%c", c);
}
