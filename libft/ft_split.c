/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 12:04:01 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 14:32:31 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char **cleanup(char **arr, size_t used) {
  while (used--)
    free(arr[used]);
  free(arr);
  return (NULL);
}

static size_t count_words(char const *s, char c) {
  size_t i;
  size_t cnt;

  i = 0;
  cnt = 0;
  while (s[i]) {
    while (s[i] == c)
      i++;
    if (s[i]) {
      cnt++;
      while (s[i] && s[i] != c)
        i++;
    }
  }
  return (cnt);
}

static char **split2(char **res, size_t words, char const *s, char c) {
  size_t i;
  size_t j;
  size_t start;

  i = 0;
  j = 0;
  while (s[i] && j < words) {
    while (s[i] == c)
      i++;
    if (!s[i])
      break;
    start = i;
    while (s[i] && s[i] != c)
      i++;
    res[j] = ft_substr(s, start, i - start);
    if (!res[j])
      return (cleanup(res, j));
    j++;
  }
  return (res);
}

char **ft_split(char const *s, char c) {
  size_t words;
  char **res;

  if (!s)
    return (NULL);
  words = count_words(s, c);
  res = malloc((words + 1) * sizeof(char *));
  if (!res)
    return (NULL);
  res[words] = NULL;
  return (split2(res, words, s, c));
}
