/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 16:17:27 by jreis             #+#    #+#             */
/*   Updated: 2026/07/30 16:17:30 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

// int	main(void)
// {
// 	int	i;

// 	printf("%d \n", ft_atoi("0"));
// 	printf("%d \n", ft_atoi("-0"));
// 	printf("%d \n", ft_atoi("+42"));
// 	printf("%d \n", ft_atoi("-42"));
// 	printf("%d \n", ft_atoi("--42"));
// 	printf("%d \n", ft_atoi("---42"));
// 	printf("%d \n", ft_atoi("+-+-42"));
// 	printf("%d \n", ft_atoi("42abc"));
// 	printf("%d \n", ft_atoi("abc42"));
// 	printf("%d \n", ft_atoi(""));
// 	printf("%d \n", ft_atoi("    123--2"));
// 	printf("%d \n", ft_atoi("\t\n\v\f\r123"));
// 	printf("%d \n", ft_atoi("++--123"));
// 	printf("%d \n", ft_atoi("+-+-+-123"));
// }
