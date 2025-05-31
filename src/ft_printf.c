#include "ft_printf.h"
#include "libft.h"

static size_t ft_select_format(va_list args, const char format) {
    size_t len;

    len = 0;
    if (format == 'c')
            len += ft_put_char(va_arg(args, int));
    else if (format == 's')
            len += ft_put_str(va_arg(args, char *));
    else if (format == 'p')
            len += ft_put_pointer(va_arg(args, void *));
    else if ((format == 'd') || (format == 'i'))
            len += ft_put_nbr(va_arg(args, int));
    else if (format == 'u')
            len += ft_put_unsigned(va_arg(args, unsigned int));
    else if (format == 'x')
            len += ft_put_hexadecimal(va_arg(args, unsigned int), "0123456789abcdef");
    else if (format == 'X')
            len += ft_put_hexadecimal(va_arg(args, unsigned int), "0123456789ABCDEF");
    else if (format == '%')
            len += ft_put_percent();
    return (len);
}

int ft_printf(const char *fmt, ...) {
    va_list (args);
    va_start (args, fmt);
    size_t len;

    len = 0;
    while (*fmt) {
        if (*fmt != '%') 
            len += ft_put_char(*fmt);
        else {
            fmt++;
            if (*fmt)
                len += ft_select_format(args, *fmt);
            else {
                ft_putchar_fd(*fmt, 1);
                len++;
            }
        }
        fmt++;
    }
    va_end(args);
    return ((int)len);
}