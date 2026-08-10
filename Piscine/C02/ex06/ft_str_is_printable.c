/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:34:26 by jreis             #+#    #+#             */
/*   Updated: 2026/07/27 15:34:31 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(31 < str[i] && str[i] < 127))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char    test1 = 31;
// 	char	test2[3] = {(char) 44, (char) 45, (char) 46};
// 	char	*test3 = "ffdjAh\nasjbh";
// 	char	*test4 = "ff2djhasjbh";
// 	char	*test5 = "ADGVG";

// 	if (0 == ft_str_is_printable(&test1))
// 		printf("1Well done\n");
// 	if (1 == ft_str_is_printable(test2))
// 		printf("2Well done\n");
// 	if (0 == ft_str_is_printable(test3))
// 		printf("3Well done\n");
// 	if (1 == ft_str_is_printable(test4))
// 		printf("4Well done\n");
// 	if (1 == ft_str_is_printable(test5))
// 		printf("5Well done\n");
// }