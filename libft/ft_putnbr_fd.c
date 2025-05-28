#include "libft.h"

void ft_putnbr_fd(int n, int fd) {
  char chr;

  if (n == -2147483648) {
    write(fd, "-2147483648", 11);
    return;
  }

  if (n < 0) {
    n = -n;
    write(fd, "-", 1);
  }

  if (n >= 10) {
    ft_putnbr_fd(n / 10, fd);
  }
  chr = '0' + (n % 10);
  write(fd, &chr, 1);
}