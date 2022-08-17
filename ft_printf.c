/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:00:39 by mle-biha          #+#    #+#             */
/*   Updated: 2022/08/17 15:32:56 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_arg_type(char c, int size, va_list arg)
{
	if (c == 'c')
		size += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		size += ft_putstr(va_arg(arg, char *));
	/*else if (c == 'p')
		// ft_puthexadecimal*/
	else if (c == 'd' || c == 'i')
		size += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		size += ft_putunsigned(va_arg(arg, unsigned int));
	/*else if (c == 'x')
		// ft_puthexadecimal with lowercase letters
	else if (c == 'X')
		// ft_puthexadecimal with uppercase letters
	else if (c == '%')
		size += ft_putchar('%');*/
	return (size);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;

	va_start(args, s);
	va_end(args);
}

int	main(void)
{
	char	c;

	c = 'm';
	printf("%c", c);
}

/* type va_arg(va_list ap, type);
va_arg(args, char); */
