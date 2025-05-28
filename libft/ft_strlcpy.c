/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:27:28 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:27:28 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) {
  int i = 0;
  int src_len = ft_strlen(src);
  if (dstsize == 0)
    return src_len;
  while (dstsize - 1 > i && src[i] != '\0') {
    dst[i] = src[i];
    i++;
  }
  *dst = '\0';
  return src_len;
}
