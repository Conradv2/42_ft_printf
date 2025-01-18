/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:01:54 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/18 19:12:05 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

int	ft_printf(const char *string, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, string);
	count = ft_string_iterate(string, ap, count);
	va_end(ap);
	return (count);
}

int	main(void)
{
	char	c;
	char	s[] = "siemano";
	int		a;
	int		b;

	c = 'e';
	a = ft_printf("%%cze %% is: %c %s teścik", c, s);
	printf("\n");
	b = printf("%%cze %% is: %c %s teścik", c, s);
	printf("\n%d\n%d\n", a, b);
	return (0);
}
