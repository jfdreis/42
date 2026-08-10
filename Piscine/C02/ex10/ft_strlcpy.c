/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:35:16 by jreis             #+#    #+#             */
/*   Updated: 2026/07/27 18:35:19 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (i);
}

// int	main(void)
// {
// 	char	src[] = "World!";
// 	char	dest[] = "\0";
// 	char	src2[] = "Hello; World!";
// 	char	dest2[] = "\0";
// 	int		len;

// 	printf("The empty array %s\n", dest);
// 	len = ft_strlcpy(dest, src, 10);
// 	printf("The copied array %s \n of length %d\n", dest, len);
// 	printf("-----\n");
// 	printf("The empty array %s\n", dest2);
// 	len = ft_strlcpy(dest2, src2, 10);
// 	printf("The copied array %s \n of length %d\n", dest2, len);
// }
