/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:18:36 by mle-biha          #+#    #+#             */
/*   Updated: 2022/08/19 14:44:14 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		i += write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
			i++;
		}
		if (n < 10)
			i += ft_putchar('0' + n);
		else
		{
			i += ft_putnbr(n / 10);
			i += ft_putnbr(n % 10);
		}
	}
	return (i);
}
