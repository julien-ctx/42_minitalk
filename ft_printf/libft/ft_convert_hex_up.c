/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex_up.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliencaucheteux <juliencaucheteux@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:58:25 by jcauchet          #+#    #+#             */
/*   Updated: 2021/11/01 11:48:25 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_convert_hex_up(unsigned int n)
{
	char	hex[17];

	hex[0] = '0';
	hex[1] = '1';
	hex[2] = '2';
	hex[3] = '3';
	hex[4] = '4';
	hex[5] = '5';
	hex[6] = '6';
	hex[7] = '7';
	hex[8] = '8';
	hex[9] = '9';
	hex[10] = 'A';
	hex[11] = 'B';
	hex[12] = 'C';
	hex[13] = 'D';
	hex[14] = 'E';
	hex[15] = 'F';
	hex[16] = '\0';
	if (n == 0)
		return ;
	ft_convert_hex_up(n / 16);
	ft_putchar(hex[n % 16]);
}
