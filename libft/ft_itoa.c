

#include "libft.h"

static int get_length(int n) {
  int len;

  len = (n <= 0) ? 1 : 0;
  while (n != 0) {
    n /= 10;
    len++;
  }
  return (len);
}

char *ft_itoa(int n) {
  char *str;
  int len;
  unsigned int num;

  len = get_length(n);
  str = (char *)malloc(sizeof(char) * (len + 1));
  if (!str)
    return (NULL);
  str[len] = '\0';
  if (n < 0) {
    str[0] = '-';
    num = -n;
  } else
    num = n;
  if (n == 0)
    str[0] = '0';
  while (num > 0) {
    str[--len] = (num % 10) + '0';
    num /= 10;
  }
  return (str);
}
