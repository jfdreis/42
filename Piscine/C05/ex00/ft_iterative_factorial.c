/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 13:40:19 by jreis             #+#    #+#             */
/*   Updated: 2026/08/03 17:42:23 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ans;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	ans = 1;
	while (nb > 1)
	{
		ans = ans * nb;
		nb--;
	}
	return (ans);
}

// int	main(void)
// {
// 	printf("The factorial of %d is : %d", 5, ft_iterative_factorial(5));
// }
