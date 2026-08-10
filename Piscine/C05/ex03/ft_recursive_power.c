/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:30:56 by jreis             #+#    #+#             */
/*   Updated: 2026/08/03 17:47:29 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int	main(void)
// {
// 	printf("%d to the power of %d is %d. \n", 0, 0, ft_recursive_power(0, 0));
// 	printf("%d to the power of %d is %d. \n", 0, 1, ft_recursive_power(0, 1));
// 	printf("%d to the power of %d is %d. \n", 1, 0, ft_recursive_power(1, 0));
// 	printf("%d to the power of %d is %d. \n", 2, 3, ft_recursive_power(2, 3));
// 	printf("%d to the power of %d is %d. \n", 2, 4, ft_recursive_power(2, 4));
// 	printf("%d to the power of %d is %d. \n", 5, 2, ft_recursive_power(5, 2));
// 	printf("%d to the power of %d is %d. \n", 6, 6, ft_recursive_power(6, 6));
// }
