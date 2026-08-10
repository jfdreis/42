/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:21:36 by jreis             #+#    #+#             */
/*   Updated: 2026/07/27 15:21:40 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*test1 = "\0";
// 	char	*test2 = "ashfs";
// 	char	*test3 = "ffdjAhasjbh";
// 	char	*test4 = "ff2djhasjbh";
// 	char	*test5 = "ADGVG";

// 	if (1 == ft_str_is_lowercase(test1))
// 		printf("Well done\n");
// 	if (1 == ft_str_is_lowercase(test2))
// 		printf("Well done\n");
// 	if (0 == ft_str_is_lowercase(test3))
// 		printf("Well done\n");
// 	if (0 == ft_str_is_lowercase(test4))
// 		printf("Well done\n");
// 	if (0 == ft_str_is_lowercase(test5))
// 		printf("Well done\n");
// }
