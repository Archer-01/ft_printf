/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:53:34 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/22 14:56:47 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_putnbr_unsigned(unsigned int nb)
{
	if (nb >= 0 && nb < 10)
		return (ft_putchar(nb + '0'));
	else
		return (ft_putnbr_unsigned(nb / 10) + ft_putnbr_unsigned(nb % 10));
}
