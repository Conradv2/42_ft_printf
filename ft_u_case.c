/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:43:45 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/29 02:17:55 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_u_putnbr_fd(unsigned int n, int fd)
{
	char	_n;

	if (n <= 9)
	{
		_n = n + '0';
		write (fd, &_n, 1);
	}
	else
	{
		ft_u_putnbr_fd(n / 10, fd);
		ft_u_putnbr_fd(n % 10, fd);
	}
}

int	ft_u_case(int *i, va_list ap)
{
	unsigned int	ap_value;
	int				count;

	ap_value = va_arg(ap, int);
	count = ft_digit_counter(ap_value);
	ft_u_putnbr_fd(ap_value, 1);
	(*i) += 2;
	return (count);
}
