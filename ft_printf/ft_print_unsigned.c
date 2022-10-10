/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 11:19:54 by jcauchet          #+#    #+#             */
/*   Updated: 2021/10/31 13:34:53 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(va_list args)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	ft_put_unsigned(nb);
	return (ft_unsigned_len(nb));
}
