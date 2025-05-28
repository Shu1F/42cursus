/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:26:50 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:26:50 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  const unsigned char *str1 = (const unsigned char *)s1;
  const unsigned char *str2 = (const unsigned char *)s2;
  size_t i = 0;
  while (n > i) {
    if (str1[i] != str2[i])
      return str1[i] - str2[i];
    i++;
  }
  return 0;
}
