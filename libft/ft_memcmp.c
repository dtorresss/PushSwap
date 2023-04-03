/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:11:47 by dtorres-          #+#    #+#             */
/*   Updated: 2022/10/15 17:31:52 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*array1;
	unsigned char	*array2;

	if (n == 0)
		return (0);
	array1 = (unsigned char *)s1;
	array2 = (unsigned char *)s2;
	while ((*array1 == *array2) && n - 1 > 0)
	{
		array1++;
		array2++;
		n--;
	}
	return (*array1 - *array2);
}
