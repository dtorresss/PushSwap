/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:49:10 by dtorres-          #+#    #+#             */
/*   Updated: 2022/10/15 17:24:32 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (((unsigned char)s1[i]) > ((unsigned char)s2[i]))
			return (1);
		else if (((unsigned char)s1[i]) < ((unsigned char)s2[i]))
			return (-1);
		i++;
	}
	return (0);
}
