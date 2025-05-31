#include "ft_printf.h"

size_t ft_put_char(int c) 
{
	return (write(1, &c, 1));
}