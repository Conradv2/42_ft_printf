/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normal_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:27:32 by kkruszyn          #+#    #+#             */
/*   Updated: 2025/01/18 18:37:42 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_normal_case(const char *string, int count, int *i)
{
	ft_putchar_fd(string[*i], 1);
	count++;
	(*i)++;
	return (count);
}
