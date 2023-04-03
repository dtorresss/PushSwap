/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:20:52 by dtorres-          #+#    #+#             */
/*   Updated: 2022/11/02 17:12:11 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;
	size_t	f_size;

	if (size > sizeof(long))
		return (0);
	f_size = count * size;
	array = malloc(f_size);
	ft_memset(array, 0, f_size);
	return (array);
}
