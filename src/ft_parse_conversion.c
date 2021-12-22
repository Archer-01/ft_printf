/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:59:15 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/22 10:18:12 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_parse_conversion(char conversion, va_list *ap)
{
	if (conversion == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	else if (conversion == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	return (0);
}
