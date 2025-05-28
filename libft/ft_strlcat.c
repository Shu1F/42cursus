/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:27:22 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:27:22 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t dstsize) {
  int src_len = 0;
  int dst_len = 0;
  int i = 0;
  int dst_rest;
  src_len = ft_strlen(src);
  dst_len = ft_strlen(dst);
  if (dst_len >= dstsize)
    return dstsize + src_len;

  dst_rest = dstsize - dst_len - 1;

  while (dst_rest > i && src[i] != '\0') {
    dst[dst_len + i] = src[i];
    i++;
  }
  dst[dst_len + i] = '\0';
  return dst_len + src_len;
}
