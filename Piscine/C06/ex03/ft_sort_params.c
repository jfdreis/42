/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:47:10 by jreis             #+#    #+#             */
/*   Updated: 2026/08/07 11:34:00 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **str1, char **str2);
void	ft_print_paramns(int argc, char **argv);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
		return (0);
	i = 1;
	j = argc;
	while (1 < j)
	{
		i = 0;
		while (i + 1 < j)
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i++;
		}
		j--;
	}
	ft_print_paramns(argc, argv);
	return (0);
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	if (ft_strcmp(*str1, *str2) > 0)
	{
		temp = *str1;
		*str1 = *str2;
		*str2 = temp;
	}
}

void	ft_print_paramns(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		i++;
	}
	return ;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
