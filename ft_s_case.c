/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:27:03 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/01/18 18:32:59 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_s_case(int count, int *i, va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	ft_putstr_fd(str, 1);
	count += ft_strlen(str);
	(*i) += 2;
	return (count);
}
