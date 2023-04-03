/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:47:29 by dtorres-          #+#    #+#             */
/*   Updated: 2023/01/21 11:34:54 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	if (!s || ft_strlen(s) < start || s[0] == '\0')
		return ((char *)(ft_calloc(1, 1)));
	if (start + len > ft_strlen(s))
		substr = (char *)malloc((ft_strlen(s) - start) + 1);
	else
		substr = (char *)malloc(len + 1);
	if (!substr)
		return (0);
	i = 0;
	while (len != 0 && s[start])
	{
		substr[i] = s[start];
		start++;
		i++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}
