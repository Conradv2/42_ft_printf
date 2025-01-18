/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_iterate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:28:25 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/01/18 18:40:24 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_string_iterate(const char *string, va_list ap, int count)
{
	int	i;
	int	ft_count;

	i = 0;
	ft_count = 0;
	while (string[i] != '\0')
	{
		if (string[i] != '%')
			ft_count += ft_normal_case(string, count, &i);
		else if (string[i] == '%')
			ft_count += ft_specifier_check(string, count, &i, ap);
		else
			i++;
	}
	return (ft_count);
}
