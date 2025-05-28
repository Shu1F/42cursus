/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:26:15 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 10:26:15 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str) {
  size_t i = 0;
  int flag = 1;
  int result = 0;
  while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
    i++;
  if (str[i] == '+' || str[i] == '-') {
    if (str[i] == '-')
      flag = -1;
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9') {
    result = result * 10 + (str[i] - '0');
    i++;
  }
  return result * flag;
}
