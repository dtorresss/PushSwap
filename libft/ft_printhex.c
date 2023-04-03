/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:30:02 by dtorres-          #+#    #+#             */
/*   Updated: 2023/02/12 14:21:57 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_reverse(char *str, int max)
{
	int		j;
	char	c;

	j = 0;
	while (j < max)
	{
		c = str[j];
		str[j] = str[max];
		str[max] = c;
		j++;
		max--;
	}
}

int	ft_itohex(unsigned long long nbr, char *hex)
{
	int		i;
	int		temp;

	i = 0;
	while (nbr > 0)
	{
		temp = nbr % 16;
		if (temp < 10)
			hex[i] = temp + '0';
		else
			hex[i] = temp + 55;
		i++;
		nbr /= 16;
	}
	hex[i] = '\0';
	ft_reverse(hex, i - 1);
	return (i);
}

int	ft_printhex_up(unsigned long long nbr, int fd)
{
	char	hex[100];
	int		len;

	if (nbr == 0)
	{
		ft_putchar_fd('0', fd);
		return (1);
	}
	len = ft_itohex(nbr, hex);
	ft_putstr_fd(hex, fd);
	return (len);
}

int	ft_printhex_low(unsigned long long nbr, int fd)
{
	char	hex[100];
	int		len;
	int		i;
	char	*hexa;

	hexa = NULL;
	i = 0;
	if (nbr == 0)
	{
		ft_putchar_fd('0', fd);
		return (1);
	}
	len = ft_itohex(nbr, hex);
	hexa = (char *)malloc(sizeof(char) * len + 1);
	hexa[len] = '\0';
	while (hex[i])
	{
		hexa[i] = ft_tolower(hex[i]);
		i++;
	}
	ft_putstr_fd(hexa, fd);
	free(hexa);
	return (len);
}
