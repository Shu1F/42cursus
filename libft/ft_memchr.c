/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:26:43 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:26:43 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int chr, size_t len) {
  const unsigned char *str = (const unsigned char *)s;
  size_t i = 0;

  while (len > i) {
    if (str[i] == (unsigned char)chr)
      return (void *)(str + i);
    i++;
  }
  return NULL;
}