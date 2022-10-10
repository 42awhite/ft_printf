#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbr(long int nbr);
int	put_nbr_base(unsigned long long nbr, char *base, int base_size);
int	put_hex(unsigned long long nbr, char type);
int	put_pointer(void *pun);
int	put_unsigned(unsigned int nbr);
int	ft_strlen(char *str);
int	ft_putstr(char *s);
int	ft_printf(char const *, ...);

#endif
