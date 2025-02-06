/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:30:35 by conradv2          #+#    #+#             */
/*   Updated: 2025/02/06 17:22:14 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdarg.h"
# include "stdio.h"
# include "limits.h"

int					ft_c_case(int *i, va_list ap);
int					ft_d_i_case(int *i, va_list ap);
int					ft_digit_counter(int digit);
int					ft_escape_sequences(const char *string, int *i);
unsigned int		ft_hex_digit_counter(unsigned int digit);
void				ft_l_fill_array(unsigned int ap_value, char *x_array);
int					ft_normal_case(const char *string, int *i);
int					ft_percent_case(int *i);
void				ft_print_array(const char *_x_array);
int					ft_printf(const char *string, ...);
void				ft_reverse_array(char *_x_array);
int					ft_s_case(int *i, va_list ap);
int					ft_specifier_check(const char *string, int *i, va_list ap);
int					ft_string_iterate(const char *string, va_list ap);
int					ft_u_case(int *i, va_list ap);
unsigned int		ft_u_digit_counter(unsigned int digit);
void				ft_u_putnbr_fd(unsigned int n, int fd);
void				ft_up_fill_array(unsigned int ap_value, char *x_array);
int					ft_x_case(int *i, va_list ap, const char *format);
#endif