/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:03:36 by dtorres-          #+#    #+#             */
/*   Updated: 2023/04/16 16:42:53 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*buffer;
	unsigned char	*buffer2;

	if (!dst && !src)
		return (NULL);
	buffer = (unsigned char *)src;
	buffer2 = (unsigned char *)dst;
	i = 0;
	if (dst > src)
	{
		while (len-- > 0)
			buffer2[len] = buffer[len];
	}
	else
	{
		while (i < len)
		{
			buffer2[i] = buffer[i];
			i++;
		}
	}
	return (buffer2);
}
