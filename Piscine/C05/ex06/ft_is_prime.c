/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:38:41 by jreis             #+#    #+#             */
/*   Updated: 2026/08/03 17:56:40 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	nb_divisors;

	nb_divisors = 1;
	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			nb_divisors++;
		if (nb_divisors > 2)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d is prime (1=yes) %d. \n", 0, ft_is_prime(0));
// 	printf("%d is prime (1=yes) %d. \n", 1, ft_is_prime(1));
// 	printf("%d is prime (1=yes) %d. \n", 2, ft_is_prime(2));
// 	printf("%d is prime (1=yes) %d. \n", 3, ft_is_prime(3));
// 	printf("%d is prime (1=yes) %d. \n", 4, ft_is_prime(4));
// 	printf("%d is prime (1=yes) %d. \n", 5, ft_is_prime(5));
// 	printf("%d is prime (1=yes) %d. \n", 6, ft_is_prime(6));
// 	printf("%d is prime (1=yes) %d. \n", 97, ft_is_prime(97));
// 	printf("%d is prime (1=yes) %d. \n", 391, ft_is_prime(17 * 23));
// }
