/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 12:47:42 by jreis             #+#    #+#             */
/*   Updated: 2026/07/30 12:47:45 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;
	unsigned int	len_dest;

	len_src = ft_strlen(src);
	if (!dest && size == 0)
		return (len_src);
	len_dest = ft_strlen(dest);
	if (size <= len_dest)
		return (size + len_src);
	i = len_dest;
	j = 0;
	while (src[j] && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}

// int	main(void)
// {
// 	unsigned int	ft_ret;
// 	unsigned int	std_ret;

// 	/* Test 1 */
// 	{
// 		char	ft_dest[20] = "1337 42";
// 		char	std_dest[20] = "1337 42";

// 		printf("===== Concatenate two strings =====\n");

// 		ft_ret = ft_strlcat(ft_dest, "Born to code", 20);
// 		std_ret = strlcat(std_dest, "Born to code", 20);

// 		printf("ft_strlcat : \"%s\" | return %u\n", ft_dest, ft_ret);
// 		printf("strlcat    : \"%s\" | return %u\n", std_dest, std_ret);
// 		printf("Expected   : \"1337 42Born to code\" | return 19\n\n");
// 	}

// 	/* Test 2 */
// 	{
// 		char	ft_dest[10] = "";
// 		char	std_dest[10] = "";

// 		printf("===== Concatenate empty strings =====\n");

// 		ft_ret = ft_strlcat(ft_dest, "", 10);
// 		std_ret = strlcat(std_dest, "", 10);

// 		printf("ft_strlcat : \"%s\" | return %u\n", ft_dest, ft_ret);
// 		printf("strlcat    : \"%s\" | return %u\n", std_dest, std_ret);
// 		printf("Expected   : \"\" | return 0\n\n");
// 	}

// 	/* Test 3 */
// 	{
// 		char	ft_dest[10] = "";
// 		char	std_dest[10] = "";

// 		printf("===== Append to an empty string =====\n");

// 		ft_ret = ft_strlcat(ft_dest, "hello", 10);
// 		std_ret = strlcat(std_dest, "hello", 10);

// 		printf("ft_strlcat : \"%s\" | return %u\n", ft_dest, ft_ret);
// 		printf("strlcat    : \"%s\" | return %u\n", std_dest, std_ret);
// 		printf("Expected   : \"hello\" | return 5\n\n");
// 	}

// 	/* Test 4 */
// 	{
// 		char	ft_dest[8] = "1337 42";
// 		char	std_dest[8] = "1337 42";

// 		printf("===== Source bigger than remaining space =====\n");

// 		ft_ret = ft_strlcat(ft_dest, "Born to code", 8);
// 		std_ret = strlcat(std_dest, "Born to code", 8);

// 		printf("ft_strlcat : \"%s\" | return %u\n", ft_dest, ft_ret);
// 		printf("strlcat    : \"%s\" | return %u\n", std_dest, std_ret);
// 		printf("Expected   : \"1337 42\" | return 19\n\n");
// 	}

// 	/* Test 5 */
// 	{
// 		char	ft_dest[10] = "Test";
// 		char	std_dest[10] = "Test";

// 		printf("===== Concatenate same strings =====\n");

// 		ft_ret = ft_strlcat(ft_dest, "Test", 10);
// 		std_ret = strlcat(std_dest, "Test", 10);

// 		printf("ft_strlcat : \"%s\" | return %u\n", ft_dest, ft_ret);
// 		printf("strlcat    : \"%s\" | return %u\n", std_dest, std_ret);
// 		printf("Expected   : \"TestTest\" | return 8\n\n");
// 	}

// 	/* Test 6 */
// 	{
// 		char	ft_dest[10] = "abc";
// 		char	std_dest[10] = "abc";

// 		printf("===== Size zero =====\n");

// 		ft_ret = ft_strlcat(ft_dest, "XYZ", 0);
// 		std_ret = strlcat(std_dest, "XYZ", 0);

// 		printf("ft_strlcat : \"%s\" | return %u\n", ft_dest, ft_ret);
// 		printf("strlcat    : \"%s\" | return %u\n", std_dest, std_ret);
// 		printf("Expected   : \"abc\" | return 3\n\n");
// 	}

// 	/* Test 7 */
// 	{
// 		char	ft_dest[10] = "abc";
// 		char	std_dest[10] = "abc";

// 		printf("===== Size smaller than destination length =====\n");

// 		ft_ret = ft_strlcat(ft_dest, "XYZ", 2);
// 		std_ret = strlcat(std_dest, "XYZ", 2);

// 		printf("ft_strlcat : \"%s\" | return %u\n", ft_dest, ft_ret);
// 		printf("strlcat    : \"%s\" | return %u\n", std_dest, std_ret);
// 		printf("Expected   : unchanged | return 5\n\n");
// 	}

// 	/* Test 8 */
// 	{
// 		char	ft_dest[10] = "abc";
// 		char	std_dest[10] = "abc";

// 		printf("===== Size exactly destination length + 1 =====\n");

// 		ft_ret = ft_strlcat(ft_dest, "XYZ", 4);
// 		std_ret = strlcat(std_dest, "XYZ", 4);

// 		printf("ft_strlcat : \"%s\" | return %u\n", ft_dest, ft_ret);
// 		printf("strlcat    : \"%s\" | return %u\n", std_dest, std_ret);
// 		printf("Expected   : \"abc\" | return 6\n\n");
// 	}

// 	return (0);
// }