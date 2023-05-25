/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:43:04 by dtorres-          #+#    #+#             */
/*   Updated: 2023/04/16 16:42:53 by dtorres-         ###   ########.fr       */
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
