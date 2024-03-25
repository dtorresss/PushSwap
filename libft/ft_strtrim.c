/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:05:45 by dtorres-          #+#    #+#             */
/*   Updated: 2024/03/25 10:53:42 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int	ft_check_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*res;
	size_t		i;
	size_t		j;

	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_check_char(s1[i], set))
		i++;
	while (j > i && ft_check_char(s1[j - 1], set))
		j--;
	res = ft_substr(s1, i, j - i);
	if (!res)
		return (NULL);
	return (res);
}
