/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:26:09 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 13:38:21 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_in_set(char c, const char *set) {
  while (*set) {
    if (*set == c)
      return 1;
    set++;
  }
  return 0;
}

char *ft_strtrim(char const *s1, char const *set) {
  size_t start;
  size_t end;
  size_t i;
  char *new_str;

  if (!s1 || !set)
    return NULL;

  start = 0;
  end = ft_strlen(s1);

  while (s1[start] && is_in_set(s1[start], set))
    start++;

  while (end > start && is_in_set(s1[end - 1], set))
    end--;
  new_str = malloc(end - start + 1);
  if (!new_str)
    return NULL;
  i = 0;
  while (start < end)
    new_str[i++] = s1[start++];
  new_str[i] = '\0';
  return new_str;
}
