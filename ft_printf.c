/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:20:57 by ablanco-          #+#    #+#             */
/*   Updated: 2022/10/12 17:21:16 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_toprint(va_list args, const char c)
{
	int	cont;

	cont = 0;
	if (c == 'c')
		cont += ft_putchar(va_arg(args, int));
	else if (c == 's')
		cont += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		cont += put_pointer(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		cont += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		cont += put_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		cont += put_hex(va_arg(args, unsigned int), c);
	else if (c == '%')
		cont += ft_putchar('%');
	return (cont);
}

int	ft_printf(char const *str, ...)
{
	int	cont;
	va_list	args;
	int	lenght;

	cont = 0;
	lenght = 0;
	va_start(args, str);
	while (str[cont])
	{
		if (str[cont] == '%')
		{
			lenght += ft_toprint(args, str[cont + 1]);
			cont ++;
		}
		else
			lenght += ft_putchar(str[cont]);
		cont++;
	}
	va_end(args);
	return (lenght);
}
