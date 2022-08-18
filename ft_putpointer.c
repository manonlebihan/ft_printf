/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:40:03 by mle-biha          #+#    #+#             */
/*   Updated: 2022/08/18 23:27:19 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(va_list arg)
{
	int	i;

	i = 0;
	if ((void *)va_arg(arg, long int) == NULL)
		ft_putstr("error");
	else
	{
		i += ft_putstr("0x");
		i += ft_puthexa(va_arg(arg, int), "0123456789abcdef");
	}
	return (i);
}

/* int	main(int argc, char *argv[])
{
	int	v = 230299;
	int	*p = &v;

	if (argc == 3)
	{
		printf("puthexa : \n");
		ft_putpointer(p, "0123456789abcdef");
		ft_putchar('\n');
		printf("printf : \n");
		printf("%p\n", p);
	}
} */
