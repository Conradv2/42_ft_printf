/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:27:03 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/01/26 13:00:30 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_s_case(int *i, va_list ap)
{
	int		count;
	char	*str;

	count = 0;
	str = va_arg(ap, char *);
	ft_putstr_fd(str, 1);
	count += ft_strlen(str);
	(*i) += 2;
	return (count);
}
