#include "ft_printf.h"
#include "libft.h"

size_t ft_put_str(char *str) {
    if (!str)
        return (write(1, "(null)", 6));

    ft_putstr_fd(str, 1);
    return (ft_strlen(str));
}