/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:28:29 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/02/01 16:28:39 by kkruszyn         ###   ########.fr       */
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
