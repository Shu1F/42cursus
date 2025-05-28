#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
  char *new_str;
  size_t len;
  size_t i;

  i = 0;

  if (!s || !f)
    return NULL;

  len = ft_strlen(s);

  new_str = malloc(len + 1);

  if (!new_str)
    return NULL;

  while (len > i) {
    new_str[i] = f(i, s[i]);
    i++;
  }
  new_str[i] = '\0';

  return (new_str);
}
