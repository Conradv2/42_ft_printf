/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:01:54 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/18 19:23:50 by kkruszyn         ###   ########.fr       */
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
	char	*j = "AAAAAAAAA";
	int		a;
	int		b;
	int		d = 12;
	int		i = 012;
	int		hex = 0x12;

	c = 'e';
	a = ft_printf("%%cze %% is: %c %s teś%scik", c, s, j);
	printf("\n");
	b = printf("%%cze %% is: %c %s teś%scik", c, s, j);
	printf("\n%d\n%d\n", a, b);
	printf("%d\n", d);
	printf("%i\n", i);
	printf("%i\n", hex);
	return (0);
}
