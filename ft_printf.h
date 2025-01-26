/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:30:35 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/26 14:44:50 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdarg.h"
# include "stdio.h"

int		ft_printf(const char *string, ...);
int		ft_string_iterate(const char *string, va_list ap);
int		ft_specifier_check(const char *string, int *i, va_list ap);
int		ft_percent_case(int *i);
int		ft_s_case(int *i, va_list ap);
int		ft_normal_case(const char *string, int *i);
int		ft_c_case(int *i, va_list ap);
int		ft_d_i_case(int *i, va_list ap);
int     ft_digit_counter(int digit);
int		ft_u_case(int *i, va_list ap);
#endif