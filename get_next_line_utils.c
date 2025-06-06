#include "get_next_line.h"

void *ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char *dest_copy = (unsigned char *)dest;
	const unsigned char *src_copy = (const unsigned char *)src;

	if(dest_copy == src_copy || len == 0)
		return dest;

	while(len--)
		*dest_copy++ = *src_copy++;
	return dest;
}

size_t ft_strlen(const char *str) 
{
  size_t length = 0;
  while (str[length])
    length++;
  return length;
}

char *ft_strdup(const char *str)
{
  size_t len = ft_strlen(str);
  char *str_copy = malloc(len + 1);
  size_t i;

  i = 0;
  if (!str_copy)
    return NULL;

  while (len > i) {
    str_copy[i] = str[i];
    i++;
  }
  str_copy[i] = '\0';
  return str_copy;
}


char *ft_strjoin(char const *s1, char const *s2)
{
  size_t s1_len;
  size_t s2_len;
  size_t i;
  char *new_str;

  if (!s1 && !s2)
    return NULL;
  if (!s1)
    return ft_strdup(s2);
  if (!s2)
    return ft_strdup(s1);

  s1_len = ft_strlen(s1);
  s2_len = ft_strlen(s2);

  new_str = malloc(s1_len + s2_len + 1);
  if (!new_str)
    return NULL;

  i = 0;

  ft_memcpy(new_str, s1, s1_len);
  ft_memcpy(new_str + s1_len, s2, s2_len);
  new_str[s1_len + s2_len] = '\0';
  return new_str;
}


char *ft_strrchr(const char *str, int find_ch)
{
  int str_len = ft_strlen(str);

  while (str_len >= 0) {
    if (str[str_len] == (char)find_ch)
      return (char *)(str + str_len);
    str_len--;
  }
  return NULL;
}