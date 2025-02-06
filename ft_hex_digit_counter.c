/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_digit_counter.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:52:48 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/02/06 13:53:27 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

unsigned int	ft_hex_digit_counter(unsigned int digit)
{
	int	count;

	count = 0;
	while (digit != 0)
	{
		digit /= 16;
		count++;
	}
	return (count);
}
