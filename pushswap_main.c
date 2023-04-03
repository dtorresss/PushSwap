/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:46:16 by dtorres-          #+#    #+#             */
/*   Updated: 2023/04/03 16:23:57 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Se puede usar write, read, malloc, free y exit

#include "pushswap.h"

void	stake_nbrs(int count, char **arr, t_stack *s)
{
	int	i;
	int	j;
	int	*str;

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
		stake(s, j);
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

	if (ft_strlen(str) > 10 || ft_atoi(str) > 2147483647)
		return (1);
	i = 0;
	while (str[i])
	{
		if (is_duplicated(str, arr, pos + 1) == 1
			|| (!ft_isdigit(str[i]) && str[i] != '-'))
			return (1);
		i++;
	}
	return (i == 0);
}

void	read_nbrs(char **arr, int count, t_stack *s)
{
	int		i;
	int		j;

	i = 1;
	if (!arr[i])
	{
		ft_printf("Error\n");
		return ;
	}
	while (arr[i])
	{
		j = checker(arr[i], arr, i);
		if (j == 1)
		{
			ft_printf("Error\n");
			return ;
		}
		i++;
	}
	stake_nbrs(count, arr, s);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	read_nbrs(argv, argc, &a);
}
