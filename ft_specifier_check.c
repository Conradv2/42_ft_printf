/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_check.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:39:58 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/01/26 13:56:33 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_specifier_check(const char *string, int *i, va_list ap)
{
	if (string[*i + 1] == 'c')
		return (ft_c_case(i, ap));
	else if (string[*i + 1] == 's')
		return (ft_s_case(i, ap));
	else if (string[*i + 1] == '%')
		return (ft_percent_case(i));
	else if (string[*i + 1] == 'd' || string[*i + 1] == 'i')
		return (ft_d_i_case(i, ap));
//	else if (string[*i + 1] == 'u')
//		return (ft_u_case(i, ap));
	return (0);
}
