/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:54:48 by jreis             #+#    #+#             */
/*   Updated: 2026/08/03 17:44:31 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}

// int	main(void)
// {
// 	printf("the factorial of %d is %d. \n", -5, ft_recursive_factorial(-5));
// 	printf("the factorial of %d is %d. \n", 1, ft_recursive_factorial(1));
// 	printf("the factorial of %d is %d. \n", 2, ft_recursive_factorial(2));
// 	printf("the factorial of %d is %d. \n", 3, ft_recursive_factorial(3));
// 	printf("the factorial of %d is %d. \n", 4, ft_recursive_factorial(4));
// 	printf("the factorial of %d is %d. \n", 5, ft_recursive_factorial(5));
// 	printf("the factorial of %d is %d. \n", 6, ft_recursive_factorial(6));
// 	printf("the factorial of %d is %d. \n", 7, ft_recursive_factorial(7));
// }
