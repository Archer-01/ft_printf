/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:59:15 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/22 14:44:22 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_parse_conversion(char conversion, va_list *ap)
{
	if (conversion == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	else if (conversion == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	else if (conversion == 'p')
		return (ft_putstr("0x") \
		 + ft_putaddr_hex(va_arg(*ap, unsigned long), HEXA_LOWER));
	else if (conversion == 'd' || conversion == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	return (0);
}
