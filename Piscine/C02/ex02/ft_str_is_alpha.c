/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:34:59 by jreis             #+#    #+#             */
/*   Updated: 2026/07/27 14:35:05 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(('A' <= str[i] && str[i] <= 'Z')
				|| ('a' <= str[i] && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char *test1 = "\0";
// 	char *test2 ="[";
// 	char *test3 = "ffdjhasjbh";
// 	char *test4 = "ff2djhasjbh";
// 	char test5 = '\0';

// 	if (1 == ft_str_is_alpha(test1))
// 		printf("Well done\n");
// 	if (0 == ft_str_is_alpha(test2))
// 		printf("Well done\n");
// 	if (1 == ft_str_is_alpha(test3))
// 		printf("Well done\n");
// 	if (0 == ft_str_is_alpha(test4))
// 		printf("Well done\n");
// 	if (0 == ft_str_is_alpha(&test5))
// 		printf("Weladal done\n");
// }
