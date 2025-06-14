/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:55:48 by sfujiike          #+#    #+#             */
/*   Updated: 2025/06/09 11:55:48 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	ft_put_unsigned(unsigned int n)
{
	size_t	len;
	char	c;

	len = 0;
	if (n >= 10)
		len += ft_put_unsigned(n / 10);
	c = (n % 10) + '0';
	len += write(1, &c, 1);
	return (len);
}
