#include "ft_printf.h"
#include "libft.h"

size_t ft_put_str(char *str) {
    size_t len;

    if (!str)
        str = "(NULL)";

    len = ft_strlen(str);
    ft_putstr_fd(str, 1);
    return (len);
}