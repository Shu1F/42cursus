/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:50:06 by sfujiike          #+#    #+#             */
/*   Updated: 2025/06/09 11:50:06 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	ft_put_pointer(void *ptr)
{
	size_t	len;

	if (!ptr)
		return (write(1, "(nil)", 5));
	len = write(1, "0x", 2);
	len += ft_put_hexadecimal((unsigned long long)ptr, "0123456789abcdef");
	return (len);
}
