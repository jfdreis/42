/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 16:02:19 by jreis             #+#    #+#             */
/*   Updated: 2026/07/30 16:02:21 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	*str1 = "saggasd";
// 	char	*str2 = "";
// 	char	*str3 = "\0";
// 	char	*str4 = "1df";

// 	if (strlen(str1) == ft_strlen(str1))
// 		printf("well done \n");
// 	else
// 		printf("Error \n");
// 	if (strlen(str2) == ft_strlen(str2))
// 		printf("well done \n");
// 	else
// 		printf("Error \n");
// 	if (strlen(str3) == ft_strlen(str3))
// 		printf("well done \n");
// 	else
// 		printf("Error \n");
// 	if (strlen(str4) == ft_strlen(str4))
// 		printf("well done \n");
// 	else
// 		printf("Error \n");
// }
