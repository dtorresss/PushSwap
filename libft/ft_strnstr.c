/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:15:41 by dtorres-          #+#    #+#             */
/*   Updated: 2023/04/16 16:21:12 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hayt_list, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	count;
	size_t	len_needle;

	i = 0;
	len_needle = ft_strlen(needle);
	if (!hayt_list && !needle)
		return (0);
	if (needle[0] == '\0')
		return ((char *)hayt_list);
	while (i < len && hayt_list[i] != '\0')
	{
		j = 0;
		count = i;
		while ((hayt_list[count] == needle[j] && count < len) && needle[j])
		{
			count++;
			j++;
		}
		if (j > len_needle - 1)
			return (((char *)hayt_list) + i);
		i++;
	}
	return (0);
}
