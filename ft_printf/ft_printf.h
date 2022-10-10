/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:25:01 by jcauchet          #+#    #+#             */
/*   Updated: 2021/11/01 11:26:10 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_type_check(const char a, const char b);
int		ft_print_nb(va_list args);
int		ft_print_char(va_list args);
int		ft_print_str(va_list args);
int		ft_print_unsigned(va_list args);
int		ft_print_hex(int c, va_list args);
int		ft_print_ptr(va_list args);
int		ft_printer(int c, va_list args);

#endif
