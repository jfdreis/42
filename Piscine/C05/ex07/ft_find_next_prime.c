/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:39:46 by jreis             #+#    #+#             */
/*   Updated: 2026/08/03 17:59:13 by jreis            ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb += 1;
	return (nb);
}

// int	main(void)
// {
// 	printf("the prime after %d is %d. \n", 0, ft_find_next_prime(0));
// 	printf("the prime after %d is %d. \n", 1, ft_find_next_prime(1));
// 	printf("the prime after %d is %d. \n", 2, ft_find_next_prime(2));
// 	printf("the prime after %d is %d. \n", 3, ft_find_next_prime(3));
// 	printf("the prime after %d is %d. \n", 4, ft_find_next_prime(4));
// 	printf("the prime after %d is %d. \n", 5, ft_find_next_prime(5));
// 	printf("the prime after %d is %d. \n", 6, ft_find_next_prime(6));
// 	printf("the prime after %d is %d. \n", 7, ft_find_next_prime(7));
// 	printf("the prime after %d is %d. \n", 12, ft_find_next_prime(12));
// }
