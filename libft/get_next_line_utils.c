/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:23:42 by dtorres-          #+#    #+#             */
/*   Updated: 2023/04/16 16:18:17 by dtorres-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_beforenl(char *str)
{
	int		i;
	char	*copy;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	copy = (char *)malloc(sizeof(char) * (i + 2));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		copy[i] = '\n';
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_afternl(char *str)
{
	int		i;
	char	*copy;
	int		endal;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	endal = ft_strlen(str) - i;
	copy = (char *)malloc(sizeof(char) * (endal + 1));
	if (!copy)
		return (NULL);
	i++;
	endal = 0;
	while (str[i] != '\0')
		copy[endal++] = str[i++];
	copy[endal] = '\0';
	free(str);
	return (copy);
}

int	ft_newline(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
