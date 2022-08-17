/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:23:12 by mle-biha          #+#    #+#             */
/*   Updated: 2022/08/17 21:20:02 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_puthexa(int nb, char *base)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		i++;
	}
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
	if (argc == 3)
	{
		ft_puthexa(atoi(argv[1]), argv[2]);
		ft_putchar('\n');
	}
}
