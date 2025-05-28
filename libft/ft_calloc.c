/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:26:23 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:26:23 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size) {
  void *str;
  if (count == 0 || size == 0)
    return malloc(1);
  str = malloc(count * size);
  if (!str)
    return NULL;
  ft_bzero(str, count * size);
  return str;
}
