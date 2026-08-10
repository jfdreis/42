/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 16:07:43 by jreis             #+#    #+#             */
/*   Updated: 2026/07/30 16:07:45 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

// int	main(void)
// {
// 	char	*str1 = "saggasd";
// 	char	*str2 = "";
// 	char	*str3 = "\0";
// 	char	*str4 = "1df";

// 	ft_putstr(str1);
// 	write(1, "\n", 1);
// 	ft_putstr(str2);
// 	write(1, "\n", 1);
// 	ft_putstr(str3);
// 	write(1, "\n", 1);
// 	ft_putstr(str4);
// 	write(1, "\n", 1);
// }
