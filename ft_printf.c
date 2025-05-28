#include "ft_printf.h"
#include "libft.h"

static size_t ft_select_format(va_list args, const char format) {
    size_t len;

    len = 0;
    if (format == 'c')
    else if (format == 's')
            len += ft_putchar(va_arg(args, int));
    else if (format == 'p')
            len += ft_putstr();
    else if ((format == 'd') || (format == 'i'))
            len += ft_putnbr();
    else if (format == 'u')
            len += ft_put_unsigned();
    else if ((format == 'x') || (format == 'X'))
            len += ft_put_hexadecimal();
    else if (format == '%')
            len += ft_put_percent();
    return (len);
}

int ft_printf(const char *str, ...) {
    va_list (args);
    va_start (args, str);

    size_t len;
    size_t i;
    len = 0;
    i = 0;

    while (str[i]) {
        if (str[i] != '%') 
            len += ft_putchar(str[i]);
        else {
            str++;
            len += ft_select_format(args, str[i]);
        }
        str++;
    }
    va_end(args);
    return ((int)len);
}