/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_digit_counter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 01:29:18 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/30 01:29:47 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	ft_u_digit_counter(unsigned int digit)
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
