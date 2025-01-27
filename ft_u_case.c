/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:43:45 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/26 14:45:34 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int ft_u_case(int *i, va_list ap)
{
	int	count;
	int	ap_value;

	ap_value = va_arg(ap, int);
	count = ft_digit_counter(ap_value);
	ft_putnbr_fd(ap_value, 1);
	if (count < 10)
		(*i) += 2;
	else
		(*i) += 3;
	return (count);
}