#include "ft_printf.h"

size_t ft_put_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}