/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:27:47 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:27:47 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
  size_t i = 0;
  size_t j;

  if (*needle == '\0')
    return (char *)haystack;

  while (i < len && haystack[i] != '\0') {
    if (haystack[i] == needle[0]) {
      j = 0;
      while (haystack[i + j] != '\0' && needle[j] != '\0' && len > i + j &&
             needle[j] == haystack[i + j]) {
        j++;
        if (needle[j] == '\0')
          return (char *)haystack + i;
      }
    }
    i++;
  }
  return NULL;
}
