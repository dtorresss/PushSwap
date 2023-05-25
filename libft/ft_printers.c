/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:23:05 by dtorres-          #+#    #+#             */
/*   Updated: 2023/04/16 16:42:53 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_ptr(unsigned long long ptr, int fd)
{
	ft_putstr_fd("0x", fd);
	return (ft_printhex_low(ptr, fd) + 2);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_printstr(char *str, int fd)
{
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	ft_putstr_fd(str, fd);
	return (ft_strlen(str));
}

int	ft_printnbr(int nbr, int fd)
{
	int		i;
	char	*num;

	i = 0;
	num = ft_itoa(nbr);
	i = ft_printstr(num, fd);
	free(num);
	return (i);
}
