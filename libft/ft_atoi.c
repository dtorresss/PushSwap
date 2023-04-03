/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:36:00 by dtorres-          #+#    #+#             */
/*   Updated: 2023/04/03 15:16:38 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoi(const char *str)
{
	int					index;
	int					negative;
	long long			result;

	index = 0;
	negative = 1;
	result = 0;
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n'
		|| str[index] == '\r' || str[index] == '\f'
		|| str[index] == '\v')
		index++;
	if (str[index] == '+' || str[index] == '-')
		if (str[index++] == '-')
			negative *= -1;
	while (ft_isdigit(str[index]))
	{
		result *= 10;
		result += str[index] - '0';
		index++;
	}
	return (result * negative);
}
