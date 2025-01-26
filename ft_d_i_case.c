/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_i_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:27:52 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/26 13:45:19 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	digit_counter (int digit)
{
	int	count;

	count = 0;
	if (digit == 0)
	 return (count + 1);
	while (digit > 0)
	{
		digit = digit / 10;
		count++;
	}
	return (count);
}

int	ft_d_i_case(int *i, va_list ap)
{
	int	count;
	int	ap_value;

	ap_value = va_arg(ap, int);
	count = digit_counter(ap_value);
	ft_putnbr_fd(ap_value, 1);
	if (count < 10)
		(*i) += 2;
	else
		(*i) += 3;
	return (count);
}