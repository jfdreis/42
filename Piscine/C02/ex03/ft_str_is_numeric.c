/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:12:32 by jreis             #+#    #+#             */
/*   Updated: 2026/07/27 15:12:35 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*test1 = "\0";
// 	char	*test2 = "[";
// 	char	*test3 = "ffd2jhasjbh";
// 	char	*test4 = "23";

// 	if (1 == ft_str_is_numeric(test1))
// 		printf("Well done\n");
// 	if (0 == ft_str_is_numeric(test2))
// 		printf("Well done\n");
// 	if (0 == ft_str_is_numeric(test3))
// 		printf("Well done\n");
// 	if (1 == ft_str_is_numeric(test4))
// 		printf("Well done\n");
// }
