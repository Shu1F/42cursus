/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:27:53 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:27:53 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int find_ch) {
  int str_len = ft_strlen(str);

  while (str_len >= 0) {
    if (str[str_len] == (char)find_ch)
      return (char *)(str + str_len);
    str_len--;
  }
  return NULL;
}
