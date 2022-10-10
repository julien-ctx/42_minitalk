/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 11:01:49 by jcauchet          #+#    #+#             */
/*   Updated: 2021/10/31 13:57:29 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nb(va_list args)
{
	int	nb;

	nb = va_arg(args, int);
	ft_putnbr(nb);
	return (ft_nb_len(nb));
}
