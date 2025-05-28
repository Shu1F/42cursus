/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:26:59 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:26:59 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
  unsigned char *dst = (unsigned char *)dest;
  const unsigned char *sc = (const unsigned char *)src;

  if (!dst && !sc)
    return NULL;

  if (dst < sc) {
    while (len--)
      *dst++ = *sc++;
  } else {
    dst = dst + len - 1;
    sc = sc + len - 1;
    while (len--) {
      *dst-- = *sc--;
    }
  }
  return dest;
}
