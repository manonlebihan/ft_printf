/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:23:12 by mle-biha          #+#    #+#             */
/*   Updated: 2022/08/18 11:05:54 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_puthexa(size_t nb, char *base)
{
	int	i;

	i = 0;
	if (nb < 16)
		i += ft_putchar(base[nb]);
	else if (nb >= 16)
	{
		i += ft_puthexa(nb / 16, base);
		i += ft_puthexa(nb % 16, base);
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	v = -230299;

	if (argc == 3)
	{
		printf("puthexa : \n");
		ft_puthexa(atoi(argv[1]), argv[2]);
		ft_putchar('\n');
		printf("printf : \n");
		printf("%X\n", v);
	}
}
