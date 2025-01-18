/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:27:51 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/01/18 18:33:26 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_c_case(int count, int *i, va_list ap)
{
	ft_putchar_fd(va_arg(ap, int), 1);
	count++;
	(*i) += 2;
	return (count);
}
