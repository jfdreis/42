/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 17:54:56 by jreis             #+#    #+#             */
/*   Updated: 2026/07/27 17:54:59 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (64 < str[i] && str[i] < 91)
			str[i] = str[i] + (char) 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	test1[] = "oLAaaaaaaBB 42";

// 	printf("Original text: %s\n", test1);
// 	ft_strlowcase(test1);
// 	printf("Final text: %s\n", test1);
// }
