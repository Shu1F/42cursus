/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:13:43 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 13:43:36 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int find_ch)
{
	while(*str != '\0') {
		if(*str == (char)find_ch)
			return (char *)str;
		str++;
	}
	if((char)find_ch == '\0')
		return (char *)str;
	return NULL;
}
