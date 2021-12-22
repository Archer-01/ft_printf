/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:29:25 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/22 16:02:19 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

# define HEXA_LEN 16
# define HEXA_UPPER "0123456789ABCDEF"
# define HEXA_LOWER "0123456789abcdef"

int	ft_putchar(char c);
int	ft_putstr(const char *str);
size_t	ft_strlen(const char *str);
int	ft_putaddr_hex(unsigned long nb, const char *base);
int	ft_putnbr(int nb);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_putnbr_hex(unsigned int nb, const char *base);

#endif