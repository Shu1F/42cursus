/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:27:10 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:27:10 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *str) {
  size_t len = ft_strlen(str);
  char *str_copy = malloc(len + 1);
  size_t i;

  if (!str_copy)
    return NULL;

  while (len > i) {
    str_copy[i] = str[i];
    i++;
  }
  str_copy[i] = '\0';

  return str_copy;
}
