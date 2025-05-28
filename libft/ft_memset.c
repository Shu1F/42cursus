/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:34:45 by sfujiike          #+#    #+#             */
/*   Updated: 2025/05/08 13:39:52 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len) {
	unsigned char *p = (unsigned char *)b;
	while(len--){
		*p = (unsigned char)c;
		p++;
	}
	return b;
}
