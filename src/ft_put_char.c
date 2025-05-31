#include "ft_printf.h"

size_t ft_put_char(int c) 
{
	ft_putchar_fd(c, 1);
	return (1);
}