/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:33:10 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/22 10:06:17 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		written;
	int		i;

	va_start(ap, format);
	written = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			written += ft_parse_conversion(format[++i], &ap);
		else
			written += ft_putchar(format[i]);
		++i;
	}
	va_end(ap);
	return (written);
}
