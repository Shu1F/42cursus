#include "ft_printf.h"

size_t ft_put_percent(void)
{
	return (write(1, "%", 1));
}