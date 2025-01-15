/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:01:54 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/15 16:32:48 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

//ap = argument pointer
//va_list is a type of a variable that stores the pointer to the start of the variable list
//va_start sets the pointer to the begining of the list
//va_end it cleans list pointer so that when we use it next time we wont have unpredicted behavior
int	ft_printf(const char *string, ...)
{
	va_list	ap;
	char	*str;
	int		count;
	int		i;

	va_start(ap, string);
	i = 0;
	count = 0;
	while (string[i] != '\0')
	{
		while (string[i] != '\0' && string[i] != '%')
		{
			ft_putchar_fd(string[i], 1);
			count++;
			i++;
		}
		while (string[i] != '\0' && string[i] == '%')
		{
			if (string[i + 1] == 'c')
			{
				ft_putchar_fd(va_arg(ap, int), 1);
				count++;
				i += 2;
			}
			else if (string[i + 1] == 's')
			{
				str = va_arg(ap, char *);
				ft_putstr_fd(str, 1);
				count += ft_strlen(str);
				i += 2;
			}
			else if (string[i + 1] == '%')
			{
				ft_putchar_fd('%', 1);
				count++;
				i += 2;
			}
		}
	}
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
	a = ft_printf("passed%% character is: %c %s teścik", c, s);
	printf("\n");
	b = printf("passed%% character is: %c %s teścik", c, s);
	printf("\n%d\n%d\n", a, b);
	return (0);
}
