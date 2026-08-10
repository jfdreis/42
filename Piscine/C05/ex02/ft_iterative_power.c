/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:56:56 by jreis             #+#    #+#             */
/*   Updated: 2026/08/03 17:46:15 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	ans;

	i = 0;
	ans = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (ans);
	while (i < power)
	{
		ans = ans * nb;
		i++;
	}
	return (ans);
}

// int	main(void)
// {
// 	printf("%d to the power of %d is %d. \n", 0, 0, ft_iterative_power(0, 0));
// 	printf("%d to the power of %d is %d. \n", 0, 1, ft_iterative_power(0, 1));
// 	printf("%d to the power of %d is %d. \n", 1, 0, ft_iterative_power(1, 0));
// 	printf("%d to the power of %d is %d. \n", 2, 3, ft_iterative_power(2, 3));
// 	printf("%d to the power of %d is %d. \n", 2, 4, ft_iterative_power(2, 4));
// 	printf("%d to the power of %d is %d. \n", 5, 2, ft_iterative_power(5, 2));
// 	printf("%d to the power of %d is %d. \n", 6, 6, ft_iterative_power(6, 6));
// }
