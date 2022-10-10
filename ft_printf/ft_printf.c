/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 10:16:57 by jcauchet          #+#    #+#             */
/*   Updated: 2021/10/31 13:36:34 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (ft_type_check(*format, *(format + 1)))
		{
			len += ft_printer(*(format + 1), args);
			i++;
			format++;
		}
		else if (*format != '%')
		{
			ft_putchar(*format);
			len++;
		}
		format++;
	}
	return (len);
}
