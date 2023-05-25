/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:00:47 by dtorres-          #+#    #+#             */
/*   Updated: 2023/04/16 16:42:53 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checker(char c, va_list ptr)
{
	int	cont;

	cont = 1;
	if (c == 'c')
		ft_putchar_fd(va_arg(ptr, int), 1);
	if (c == 's')
		cont = ft_printstr(va_arg(ptr, char *), 1);
	if (c == 'p')
		cont = ft_print_ptr(va_arg(ptr, unsigned long long), 1);
	if (c == 'd' || c == 'i')
		cont = ft_printnbr(va_arg(ptr, int), 1);
	if (c == 'u')
		cont = ft_printu(va_arg(ptr, unsigned int), 1);
	if (c == 'x')
		cont = ft_printhex_low(va_arg(ptr, unsigned int), 1);
	if (c == 'X')
		cont = ft_printhex_up(va_arg(ptr, unsigned int), 1);
	if (c == '%')
		write(1, &c, 1);
	return (cont);
}

int	ft_printf(char const *str, ...)
{
	va_list	ptr;
	int		i;
	int		cont;

	i = 0;
	cont = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			cont += ft_checker(str[i], ptr);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			cont++;
			i++;
		}
	}
	va_end(ptr);
	return (cont);
}
/*
int main()
{
	ft_printf("%p\n", "");
	printf("%p", "");
}*/
