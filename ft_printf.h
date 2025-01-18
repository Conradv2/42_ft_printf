/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:30:35 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/18 18:38:45 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdarg.h"
# include "stdio.h"

int		ft_printf(const char *string, ...);
int		ft_string_iterate(const char *string, va_list ap, int count);
int		ft_specifier_check(const char *string, int count, int *i, va_list ap);
int		ft_percent_case(int count, int *i);
int		ft_s_case(int count, int *i, va_list ap);
int		ft_normal_case(const char *string, int count, int *i);
int		ft_c_case(int count, int *i, va_list ap);

#endif