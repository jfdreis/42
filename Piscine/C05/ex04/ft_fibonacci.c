/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:32:57 by jreis             #+#    #+#             */
/*   Updated: 2026/08/03 18:00:27 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

// int	main(void)
// {
// 	printf("%d th fibonacci values is %d. \n", 0, ft_recursive_fibonacci(0));
// 	printf("%d th fibonacci values is %d. \n", 1, ft_recursive_fibonacci(1));
// 	printf("%d th fibonacci values is %d. \n", 2, ft_recursive_fibonacci(2));
// 	printf("%d th fibonacci values is %d. \n", 3, ft_recursive_fibonacci(3));
// 	printf("%d th fibonacci values is %d. \n", 4, ft_recursive_fibonacci(4));
// 	printf("%d th fibonacci values is %d. \n", 5, ft_recursive_fibonacci(5));
// 	printf("%d th fibonacci values is %d. \n", -3, ft_recursive_fibonacci(-3));
// }
