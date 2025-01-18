/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_check.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:39:58 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/01/18 18:40:11 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_specifier_check(const char *string, int count, int *i, va_list ap)
{
	if (string[*i + 1] == 'c')
		return (ft_c_case(count, i, ap));
	else if (string[*i + 1] == 's')
		return (ft_s_case(count, i, ap));
	else if (string[*i + 1] == '%')
		return (ft_percent_case(count, i));
	return (0);
}
