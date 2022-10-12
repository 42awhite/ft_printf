/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:23:26 by ablanco-          #+#    #+#             */
/*   Updated: 2022/10/12 17:19:10 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

static void	ft_char(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(long int nbr)
{
	int	cont;

	cont = 0;
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr *= -1;
		cont++;
	}
	if (nbr > 9)
		cont += ft_putnbr(nbr / 10);
	cont++;
	ft_char((nbr % 10) + '0');
	return (cont);
}

int	put_nbr_base(unsigned long long nbr, char *base, int base_size)
{
	int	cont;

	cont = 0;
	if (nbr >= (unsigned long long) base_size)
		cont = put_nbr_base(nbr / base_size, base, base_size);
	ft_char(base[nbr % base_size]);
	cont++;
	return (cont);
}

int	put_hex(unsigned long long nbr, char type)
{
	int	cont;

	cont = 0;
	if (type == 'x')
	{
		cont = put_nbr_base(nbr, "0123456789abcdef", 16);
		return (cont);
	}
	else if (type == 'X')
	{
		cont = put_nbr_base(nbr, "0123456789ABCDEF", 16);
		return (cont);
	}
	return (cont);
}

int	put_pointer(unsigned long long pun)
{
	int		cont;
	size_t		nbr;

	cont = 0;
	nbr = (size_t)pun;
	cont += write(1, "0x", 2);
	cont += put_hex(nbr, 'x');
	return (cont);
}

int	put_unsigned(unsigned int nbr)
{
	int	cont;

	cont = 0;
	cont = put_nbr_base(nbr, "0123456789", 10);
	return (cont);
}
/*
int	main(void)
{
	int value;
	void *p;

	value = put_unsigned(-1);
	printf("\n%u\n", -1);
	printf("\n%d\n", value);
}
*/
