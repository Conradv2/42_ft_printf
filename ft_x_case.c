/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 01:40:25 by conradv2          #+#    #+#             */
/*   Updated: 2025/02/01 16:30:58 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_x_case(int *i, va_list ap)
{
	int			count;
	int			ap_value;
	int			tmp;
	char		*x_array;
	int			j;

	ap_value = va_arg(ap, int);
	tmp = ap_value;
	count = 0;
	j = 0;	
	if (ap_value == 0)
	{
		ft_putnbr_fd(0, 1);
		(*i) += 2;
		return (1);
	}
	while (tmp != 0)
	{
		tmp /= 16;
		count++;
	}
	x_array = (char *)malloc((count + 1) * sizeof(char));
	if (x_array == NULL)
		return (0);
	while (ap_value != 0)
	{
		if (ap_value % 16 == 10)
			x_array[j] = 'a';
		else if (ap_value % 16 == 11)
			x_array[j] = 'b';
		else if (ap_value % 16 == 12)
			x_array[j] = 'c';
		else if (ap_value % 16 == 13)
			x_array[j] = 'd';
		else if (ap_value % 16 == 14)
			x_array[j] = 'e';
		else if (ap_value % 16 == 15)
			x_array[j] = 'f';
		else
		{
			x_array[j] = (ap_value % 16) + '0';
		} 
		ap_value /= 16;
		j++;
	}
	x_array[j] = '\0';
	j = 0;
	ft_swap_array(x_array);
	ft_print_array(x_array);
	(*i) += 2;
	free(x_array);
	return (count);
}



/*
	//count = ft_x_digit_counter(ap_value);
	// 	
	//									if remainder == 10 -> a
	//												 == 11 -> b
	//												 == 12 -> c
	//												 == 13 -> d
	//												 == 14 -> e
	//												 == 15 -> f
	// int i = 100 -> 100 / 16 -> 6 -> remainder 4 -----------
	//												   	     |
	// 					6 / 16 -> 0 -> remainder 6 -----------
	// 					100(10) -> 64(16)					 |
	// 													     |
	// 						     ------ x_arr[] = {4, 6} <----
	//			                 |
	// 							 -----> swap_arr(x_arr) --------
	//											               |
	//									x_arr[] = {6, 4} <------
i pass a number as a integer, for example 255, then i want to divide it by 16 and then divide the number that was just divided
and so on but store the % remainder in a array, so it would be two while loops, first would count how many times it is dividing and take this number
as a representative of how much space to allocate so if 255 takes 2 divides then it should allocate 2 + 1 space (cause of NULL) and at the end i should 
reverse the string and print it to get the value im looking for



*/