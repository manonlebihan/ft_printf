/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:00:39 by mle-biha          #+#    #+#             */
/*   Updated: 2022/08/19 12:44:32 by mle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		size;

	i = 0;
	size = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			size += ft_check_arg_type(s[i + 1], 0, args);
			i++;
		}
		else
			size += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (size);
}

int	main(void)
{
	/* char	*c;

	c = "manon"; */
	ft_putstr("PRINTF\n");
	printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
	ft_putstr("FT_PRINTF\n");
	ft_printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
}
