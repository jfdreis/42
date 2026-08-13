/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 16:51:47 by jreis             #+#    #+#             */
/*   Updated: 2026/08/13 18:42:07 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int		ft_strlen(char *str);
void	ft_strcpy(char *dest, char *src);
void	ft_free(struct s_stock_str *vector, int i);

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*vector;

	if (ac < 1)
		return (NULL);
	vector = malloc((ac + 1) * sizeof(t_stock_str));
	if (!vector)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		vector[i].size = ft_strlen(av[i]);
		vector[i].str = av[i];
		vector[i].copy = malloc((vector[i].size + 1) * sizeof(char));
		if (!vector[i].copy)
		{
			ft_free(vector, i);
			return (NULL);
		}
		ft_strcpy(vector[i].copy, av[i]);
		i++;
	}
	vector[ac].str = 0;
	return (vector);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_free(struct s_stock_str *vector, int i)
{
	while (0 <= i)
	{
		free(vector[i].copy);
		i--;
	}
}