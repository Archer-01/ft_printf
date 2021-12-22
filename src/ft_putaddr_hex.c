/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:37:42 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/22 12:53:03 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_putaddr_hex(unsigned long nb, const char *base)
{
	if (nb >= 0 && nb < HEXA_LEN)
		return (ft_putchar(base[nb]));
	else if(nb < 0)
		return (ft_putchar('-') + ft_putaddr_hex(-nb, base));
	else
		return (ft_putaddr_hex(nb / 16, base) + ft_putaddr_hex(nb % 16, base));
}