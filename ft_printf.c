/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:01:54 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/29 02:18:06 by conradv2         ###   ########.fr       */
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
	// char	c;
	// char	s[] = "siemano";
	// char	*j = "AAAAAAAAA";
	int		a;
	int		b;
	int		d = 10;
	int		i = 012;
	int		hex = 0x12;
	int		my_int = -2147483647;
	//				-2147483648
	//				 2147483647
	//				 4294967295

	//			-2147483648 and	2147483648 doesnt count properly


	//			za duzo nalicza mi %d w przypadku wyjscia poza zasieg inta
	//			za duzo tak samo nalicza w przypadku %u i max unsigned int value
	// 			bardzo mozliwe ze musze napisac nowego ft_putnbr_fd, ktory by dzialal tylko na unsigned int lub size_t
	//c = 'e';
	a = ft_printf("siemano\n%dcotasadsadsa", my_int);
	printf("\n");
	b = printf("siemano\n%dcotasadsadsa", my_int);
	//b = printf("%d %i %% cze %% is: %c %s teś %s cik", my_int, d, c, s, j);
	printf("\nft_printf = %d\nprintf = %d\n", a, b);
	printf("%%d = %d\n", d);
	printf("%%i = %i\n", i);
	printf("%%i(hex) = %i\n", hex);
	//ft_putnbr_fd(my_int, 1);
	// char	string[] = " implementacji ";
	// char	znak = 's';
	// int		test;
	// int		og_test;
	// test = ft_printf("Siemano test własnej%sfunkcji printf %%%c, wartość zmiennej a to %d", string, znak, d);
	// printf("\n");
	// og_test = printf("Siemano test własnej%sfunkcji printf %%%c, wartość zmiennej a to %d", string, znak, d);
	// printf("\n%d\n%d\n", test, og_test);
	return (0);
}
