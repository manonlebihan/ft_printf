/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:39:44 by mle-biha          #+#    #+#             */
/*   Updated: 2022/08/17 12:38:31 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putunsigned(unsigned int n)
{
	if (n < 10)
	{
		ft_putchar('0' + n);
	}
	else
	{
		ft_putunsigned(n / 10);
		ft_putunsigned(n % 10);
	}
	return (1);
}
