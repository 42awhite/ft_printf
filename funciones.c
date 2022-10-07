/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funciones.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:44:48 by ablanco-          #+#    #+#             */
/*   Updated: 2022/10/05 20:15:01 by ablanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	size_t	cont;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}


int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	if(!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}
