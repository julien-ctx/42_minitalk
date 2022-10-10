/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 11:23:58 by jcauchet          #+#    #+#             */
/*   Updated: 2021/11/01 11:18:02 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(int c, va_list args)
{
	int	nb;
	int	len;

	len = 0;
	nb = va_arg(args, int);
	if (nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (c == 'x')
		ft_convert_hex(nb);
	else if (c == 'X')
		ft_convert_hex_up(nb);
	if (nb < 0)
		return (8);
	while (nb)
	{
		nb /= 16;
		len++;
	}
	return (len);
}
