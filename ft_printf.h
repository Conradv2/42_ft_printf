/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:30:35 by conradv2          #+#    #+#             */
/*   Updated: 2025/02/01 15:21:09 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdarg.h"
# include "stdio.h"
# include "limits.h"

int			ft_printf(const char *string, ...);
int			ft_string_iterate(const char *string, va_list ap);
int			ft_specifier_check(const char *string, int *i, va_list ap);
int			ft_percent_case(int *i);
int			ft_s_case(int *i, va_list ap);
int			ft_normal_case(const char *string, int *i);
int			ft_c_case(int *i, va_list ap);
int			ft_d_i_case(int *i, va_list ap);
int			ft_x_case(int *i, va_list ap);
int			ft_digit_counter(int digit);
size_t		ft_u_digit_counter(unsigned int digit);
void		ft_u_putnbr_fd(unsigned int n, int fd);
int			ft_u_case(int *i, va_list ap);
int			ft_escape_sequences(const char *string, int *i);
#endif