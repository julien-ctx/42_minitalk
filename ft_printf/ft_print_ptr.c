/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 11:33:16 by jcauchet          #+#    #+#             */
/*   Updated: 2021/11/01 11:19:10 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(va_list args)
{
	void			*ptr;
	int				i;
	unsigned long	nb;

	ptr = va_arg(args, void *);
	ft_putstr("0x");
	nb = (unsigned long)ptr;
	ft_convert_hex_long(nb);
	if (nb == 0)
	{
		ft_putchar('0');
		return (3);
	}
	if (nb < 16)
		return (3);
	i = 0;
	while (nb)
	{
		nb /= 16;
		i++;
	}
	return (i + 2);
}
