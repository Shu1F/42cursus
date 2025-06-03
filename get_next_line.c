#include "get_next_line.h"

char *ft_strrchr(const char *str, int find_ch) {
  int str_len = ft_strlen(str);

  while (str_len >= 0) {
    if (str[str_len] == (char)find_ch)
      return (char *)(str + str_len);
    str_len--;
  }
  return NULL;
}

char *get_next_line(int fd)
{
    char *buffer;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);

    buffer = malloc(BUFFER_SIZE + 1);

    if (!buffer)
        return (NULL);

    
}