/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conradv2 <conradv2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:01:54 by conradv2          #+#    #+#             */
/*   Updated: 2025/01/14 23:31:13 by conradv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdarg.h"
#include "stdio.h"

float	average(int n, ...)
{
	va_list ap;
	int		total;
	int		i;

	va_start(ap, n);
	total = 0;
	i = 0;

	while(i < n)
	{
		total += va_arg (ap, int);
		i++;
	}
	va_end(ap);
	return ((float)total / n);
}

int	main(void)
{
	char array[] = "czesss";
	float average_age;
	int a;
	int *ptr;

	a = 3;
	ptr = &a;
						//This 5 is a flag
	average_age = average(3, 10, 15, 20);
	printf("The average age of those 3 people is %f\n", average_age);
	
	int test = printf("cze\n");
	printf("%d\n", test);
	printf("%s\n", array);
	printf("Memory addres of a = %p\n", (void *)&a);
	printf("value of the pointer ptr = %p\n", (void *)ptr);

	int number = 42;
    int *ptr2 = &number;

    // Printing memory address using %p
    printf("Memory address of 'number': %p\n", (void*)&number);
    // Printing pointer value using %p
    printf("Value of the pointer 'ptr': %p\n", (void*)ptr2);
	return (0);
}