/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:04:07 by jreis             #+#    #+#             */
/*   Updated: 2026/07/27 16:04:10 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (96 < str[i] && str[i] < 123)
			str[i] = str[i] - (char) 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	test1[] = "oLAaaaaaa 42";

// 	printf("Original text: %s\n", test1);
// 	ft_strupcase(test1);
// 	printf("Final text: %s\n", test1);
// }
