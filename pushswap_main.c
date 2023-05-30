/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:46:16 by dtorres-          #+#    #+#             */
/*   Updated: 2023/05/30 17:17:18 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	stake_nbrs(int count, char **arr, t_stack *s)
{
	int			i;
	long long	j;
	int			*str;

	str = (int *)malloc(sizeof(int) * count + 1);
	i = 1;
	while (i < count)
	{
		j = ft_atoi(arr[i]);
		str[i] = j;
		i++;
	}
	i = 1;
	while (count > i)
	{
		j = str[count - 1];
		insert_by_start(s, j);
		count--;
	}
}

int	is_duplicated(char *str, char **arr, int pos)
{
	while (arr[pos])
	{
		if (ft_atoi(arr[pos]) == ft_atoi(str))
			return (1);
		pos++;
	}
	return (0);
}

int	checker(char *str, char **arr, int pos)
{
	int	i;

	i = 0;
	if ((str[0] == '-' && ft_strlen(str) > 11)
		|| (str[0] == '-' && ft_atoi(str) < -2147483648))
		return (1);
	if ((ft_strlen(str) > 10 && str[0] != '-' ) || (ft_atoi(str) > 2147483647))
		return (1);
	if (!ft_isdigit(str[i]) && str[i] != '-')
		return (1);
	if (str[i] == '-' && !str[1])
		return (1);
	while (str[i])
	{
		if (is_duplicated(str, arr, pos + 1) == 1
			|| (!ft_isdigit(str[i]) && i != 0))
			return (1);
		i++;
	}
	return (0);
}

int	read_nbrs(char **arr, int count, t_stack *s)
{
	int		i;
	int		j;

	i = 1;
	if (!arr[i])
		return (1);
	while (arr[i])
	{
		j = checker(arr[i], arr, i);
		if (j == 1)
		{
			ft_printf("Error\n");
			return (1);
		}
		i++;
	}
	stake_nbrs(count, arr, s);
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	
	create_empty(&a);
	if (read_nbrs(argv, argc, &a) == 0)
	{
		if (is_ordered(a) == 0)
			order(&a);
	}
	return (0);
}

/*ft_printf("Primero la lista sin cambiar los dos primeros\n");
		show_list(&a);
		sa(&a);
		ft_printf("Ahora cambiados\n");
		show_list(&a);
		pb(&a, &b);
		pb(&a, &b);
		ft_printf("Ahora a sin el primer elemento\n");
		show_list(&a);
		ft_printf("Ahora b con el primer elemento de a\n");
		show_list(&b);
		ss(&a, &b);
		ft_printf("Los dos elementos del stack de a cambiados\n");
		show_list(&a);
		ft_printf("Los dos elementos del stack de b cambiados\n");
		show_list(&b);
		rr(&a, &b);
		ft_printf("Todos los elementos de a rotados hacia arriba\n");
		show_list(&a);
		ft_printf("Ahora los de b\n");
		show_list(&b);
		rrr(&a, &b);
		ft_printf("Todos los elementos de a rotados hacia abajo\n");
		show_list(&a);
		ft_printf("Ahora los de b\n");
		show_list(&b);*/
/*
Se puede usar write, read, malloc, free y exit*/
