/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 12:36:12 by jreis             #+#    #+#             */
/*   Updated: 2026/07/30 12:36:15 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s1 = "abc";
// 	char	*s2 = "abcde";
// 	char	*s3 = "ab";
// 	int		i1, i2, i3;

// 	i1 = ft_strncmp(s1, s1, 5);
// 	i2 = ft_strncmp(s1, s2, 2);
// 	i3 = ft_strncmp(s1, s3, 3);
// 	printf("s1 - s1 is %d \n", i1);
// 	printf("s1 - s2 is %d \n", i2);
// 	printf("s1 - s3 is %d \n", i3);
// }
