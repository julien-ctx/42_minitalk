/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:05:53 by jcauchet          #+#    #+#             */
/*   Updated: 2021/10/29 11:15:16 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_unsigned(unsigned int nb)
{
	if (nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		ft_put_unsigned(nb / 10);
		ft_put_unsigned(nb % 10);
	}
}
