#include "get_next_line.h"

char *get_next_line(int fd)
{
  static char *save_line;
  char *buffer;
  char *line;
  char *tmp;
  size_t len;
  int bytes_read;

  len = 0;

  if (fd < 0 || BUFFER_SIZE <= 0)
      return (NULL);

  buffer = malloc(BUFFER_SIZE + 1);

  if (!buffer)
    return (NULL);

  bytes_read = 1;
  while ((!save_line || !ft_strrchr(save_line, '\n')) && bytes_read != 0)
  {
    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (bytes_read == -1)
    {
      free(buffer);
      free(save_line);
      save_line = NULL;
      return NULL;
    }
    buffer[bytes_read] = '\0';
    tmp = save_line;
    save_line = ft_strjoin(save_line, buffer);
    free(tmp);
  }
  free(buffer);

  if (!save_line || *save_line == '\0')
  {
    free(save_line);
    save_line = NULL;
    return NULL;
  }

  while (save_line[len] && save_line[len] != '\n')
    len++;
  if (save_line[len] == '\n')
    len++;

  line = malloc(len + 1);
  if (!line)
    return (NULL);
  ft_memcpy(line, save_line, len);
  line[len] = '\0';

  tmp = save_line;
  save_line = ft_strdup(save_line + len);

  free(tmp);
  return (line);
}