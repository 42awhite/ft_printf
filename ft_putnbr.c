/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:23:26 by ablanco-          #+#    #+#             */
/*   Updated: 2022/10/06 14:06:15 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putnbr(unsigned long nbr, char *str)
{
	long int	num;
	static int	cont;

	number = (unsigned int)nbr;
	cont = 0;
	if(number >= ft_strlen(nbr))
	{
		ft_putnbr(number / ft_strlen(str), str);
		number = number % ft_strlen(str)
	}
	cont++;
	ft_putchar(str[num]);
	return (cont);
}

int	ft_hexad(size_t nbr)
{
	static int	cont;
	char		*hex;

	hex = "0123456789abcdef";
	cont = 0;
	if (nbr >= 16)
	{
		ft_hexad(nbr / 16);
		nbr = nbr % 16;
	}
	cont++;
	ft_putchar(hex[nbr]);
	return (cont);
}

int	ft_putnbr_fd(int n)
{
	char		number;
	static int	cont;

	cont = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n <= 9)
	{
		number = n + '0';
		write(fd, &number, 1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10);
		ft_putnbr_fd(n % 10);
	}
	cont++;
	return (cont)
}

int	ft_pttohex(void *pun)
{
	size_t	length;
	size_t	n_pun;

	n_pun = (size_t)pun;
	
	
}
