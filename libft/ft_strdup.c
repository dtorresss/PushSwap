/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:43:04 by dtorres-          #+#    #+#             */
/*   Updated: 2022/11/01 13:41:14 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		size;
	int		i;

	size = ((ft_strlen(s1) + 1) * sizeof(*s1));
	i = 0;
	copy = (char *)malloc(size);
	if (!copy)
		return (0);
	while (s1[i])
	{
		((unsigned char *)copy)[i] = ((unsigned char *)s1)[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
