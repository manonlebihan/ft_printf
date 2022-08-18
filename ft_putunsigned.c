/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:39:44 by mle-biha          #+#    #+#             */
/*   Updated: 2022/08/18 21:03:58 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	if (n < 10)
		ft_putchar('0' + n);
	else
	{
		ft_putunsigned(n / 10);
		ft_putunsigned(n % 10);
	}
	return (1);
}
