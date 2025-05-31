#include "libft.h"
#include "ft_printf.h"

size_t ft_put_nbr(int n)
{
    size_t len = 0;
    char   chr;

    if (n == -2147483648)
        return write(1, "-2147483648", 11);

    if (n < 0)
    {
        len += write(1, "-", 1);
        n = -n;
    }

    if (n >= 10)
        len += ft_put_nbr(n / 10);

    chr = '0' + (n % 10);
    len += write(1, &chr, 1);

    return len;
}