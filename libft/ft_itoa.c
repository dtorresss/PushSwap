/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:27:46 by dtorres-          #+#    #+#             */
/*   Updated: 2023/01/21 14:08:55 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_size(int n, int size)
{
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		n = n / 10;
		size++;
	}
	size++;
	return (size);
}

static char	*ft_alloc(char *str, int size)
{
	str = (char *)malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	return (str);
}

static char	*ft_put_instr(char *str, int size, int nbr)
{
	char	c;
	int		i;
	int		j;

	if (str == NULL)
		return (NULL);
	j = size - 2;
	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		i = 1;
		str[0] = '-';
	}
	str[size - 1] = '\0';
	while (j >= i)
	{
		c = (nbr % 10) + '0';
		str[j] = c;
		nbr = nbr / 10;
		j--;
	}
	return (str);
}

static	char	*ft_special_nbr(char *res)
{
	char	*nbr;
	int		i;

	nbr = "-2147483648";
	i = 0;
	res = (char *)malloc(sizeof(char) * 13);
	if (!res)
		return (NULL);
	res[12] = '\0';
	while (i < 12)
	{
		res[i] = nbr[i];
		i++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;

	res = NULL;
	size = 0;
	if (n < 0 && n != -2147483648)
	{
		size = ft_size(n, size + 2);
		res = ft_alloc(res, size);
	}
	if (n >= 0)
	{
		if (n == 0)
			size = 2;
		else
			size = ft_size(n, size + 1);
		res = ft_alloc(res, size);
	}
	if (n == -2147483648)
		return (ft_special_nbr(res));
	return (ft_put_instr(res, size, n));
}
/*int	main()
{
	char	*res;
	int		i;
	i =  0;
	res = ft_itoa(-2147483647 -1);
	while (res[i] != '\0')
		i++;
	printf("%s", res);
}*/
