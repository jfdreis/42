/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:01:00 by jreis             #+#    #+#             */
/*   Updated: 2026/07/27 18:01:02 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (96 < str[0] && str[0] < 123)
		str[0] = str[0] - (char) 32;
	i = 1;
	while (str[i])
	{
		if (96 < str[i] && str[i] < 123
			&& (!((64 < str[i - 1] && str[i - 1] < 91)
					|| (96 < str[i - 1] && str[i - 1] < 123)
					|| (47 < str[i - 1] && str[i - 1] < 58))))
			str[i] = str[i] - (char) 32;
		else if (64 < str[i] && str[i] < 91
			&& ((64 < str[i - 1] && str[i - 1] < 91)
				|| (96 < str[i - 1] && str[i - 1] < 123)))
			str[i] = str[i] + (char) 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	test1[] = "hi, how are you? 42words forty-two; fifty+and+one";
// 	char	test2[] = "HELLO 42words forty-two; fifty+and+one";

// 	printf("Original text: %s\n", test1);
// 	ft_strcapitalize(test1);
// 	printf("Final text: %s\n", test1);
// 	printf("Original text: %s\n", test2);
// 	ft_strcapitalize(test2);
// 	printf("Final text: %s\n", test2);
// }
