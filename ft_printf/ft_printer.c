/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 10:55:44 by jcauchet          #+#    #+#             */
/*   Updated: 2021/10/31 13:39:20 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printer(int c, va_list args)
{
	int	len;

	len = 1;
	if (c == 'd' || c == 'i')
		len = ft_print_nb(args);
	else if (c == 'c')
		len = ft_print_char(args);
	else if (c == '%')
		ft_putchar('%');
	else if (c == 's')
		len = ft_print_str(args);
	else if (c == 'u')
		len = ft_print_unsigned(args);
	else if (c == 'x' || c == 'X')
		len = ft_print_hex(c, args);
	else if (c == 'p')
		len = ft_print_ptr(args);
	return (len);
}
