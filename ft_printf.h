/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:30:41 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/23 19:46:47 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./include/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_parse_conversion(char conversion, va_list *ap);

#endif