/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:28:01 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:28:01 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_sub(size_t copy_len, unsigned int start, char *newStr, char const *s) {
  size_t i = 0;
  while (copy_len > i) {
    newStr[i] = s[start + i];
    i++;
  }
  newStr[i] = '\0';
  return newStr;
}

char *ft_substr(char const *s, unsigned int start, size_t len) {
  size_t copy_len;
  size_t s_len;
  char *newStr;
  if (!s)
    return NULL;
  s_len = ft_strlen(s);
  if (start >= s_len) {
    newStr = malloc(1);
    newStr[0] = '\0';
    return newStr;
  }
  copy_len = s_len - start;
  if (len < copy_len)
    copy_len = len;
  newStr = malloc(copy_len + 1);
  if (!newStr)
    return NULL;
  return ft_sub(copy_len, start, newStr, s);
}