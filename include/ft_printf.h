/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfujiike <sfujiike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:12:44 by sfujiike          #+#    #+#             */
/*   Updated: 2025/06/09 11:12:44 by sfujiike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>
# include "libft.h"

int		ft_printf(const char *fmt, ...);
size_t	ft_put_char(int c);
size_t	ft_put_percent(void);
size_t	ft_put_str(char *str);
size_t	ft_put_pointer(void *ptr);
size_t	ft_put_nbr(int n);
size_t	ft_put_unsigned(unsigned int n);
size_t	ft_put_hexadecimal(unsigned long long num, char *base);

#endif
