/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_case_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:15:19 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/02/01 15:57:53 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_swap_array(char *_x_array)
{
	int		i;
	int		arr_len;
	char	tmp;

	tmp = 0;
	arr_len = ft_strlen(_x_array);
	i = 0;
	while (i < arr_len / 2)
	{
		tmp = _x_array[i];
		_x_array[i] = _x_array[arr_len - i - 1];
		_x_array[arr_len - i - 1] = tmp;
		i++;
	}
}

void	ft_print_array(const char *_x_array)
{
	int	j;

	j = 0;
	while (_x_array[j] != '\0')
	{
		ft_putchar_fd(_x_array[j], 1);
		j++;
	}
}
