/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:10:45 by dtorres-          #+#    #+#             */
/*   Updated: 2023/04/16 16:42:53 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		counter;
	char	*res;
	int		i;
	int		j;

	j = 0;
	i = 0;
	counter = -1;
	while (s[i])
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			j = i;
			counter++;
		}
		i++;
	}
	res = ft_memchr(s + j, c, ft_strlen(s) + 1);
	return (res);
}
