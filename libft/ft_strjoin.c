/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:27:16 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:27:16 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


char *ft_strjoin(char const *s1, char const *s2) {
  size_t s1_len;
  size_t s2_len;
  size_t i;
  char *new_str;

  s1_len = ft_strlen(s1);
  s2_len = ft_strlen(s2);

  new_str = malloc(s1_len + s2_len + 1);
  if (!new_str)
    return NULL;

  i = 0;

  ft_memcpy(new_str, s1, s1_len);
  ft_memcpy(new_str + s1_len, s2, s2_len);
  new_str[s1_len + s2_len] = '\0';
  return new_str;
}
