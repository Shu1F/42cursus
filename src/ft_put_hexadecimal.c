/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexadecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:46:40 by sfujiike          #+#    #+#             */
/*   Updated: 2025/06/09 11:46:40 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

size_t	ft_put_hexadecimal(unsigned long long num, char *base)
{
	size_t	len;

	len = 0;
	if (num >= 16)
		len += ft_put_hexadecimal(num / 16, base);
	len += write(1, &base[num % 16], 1);
	return (len);
}
