/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:01:54 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/26 13:50:25 by conradv2         ###   ########.fr       */
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
	count = ft_string_iterate(string, ap);
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
	int		d = 0xf;
	int		i = 012;
	int		hex = 0x12;

	c = 'e';
	a = ft_printf("%i %%cze %% is: %c %s teś%scik", d, c, s, j);
	printf("\n");
	b = printf("%i %%cze %% is: %c %s teś%scik", d, c, s, j);
	printf("\nft_printf = %d\nprintf = %d\n", a, b);
	printf("%%d = %d\n", d);
	printf("%%i = %i\n", i);
	printf("%%i(hex) = %i\n", hex);
	return (0);
}
