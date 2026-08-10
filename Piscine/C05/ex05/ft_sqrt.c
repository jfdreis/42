/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:37:34 by jreis             #+#    #+#             */
/*   Updated: 2026/08/03 17:53:25 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while ((i * i) < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

// int	main(void)
// {
// 	printf("the square root of %d is %d. \n", 0, ft_sqrt(0));
// 	printf("the square root of %d is %d. \n", 1, ft_sqrt(1));
// 	printf("the square root of %d is %d. \n", 2, ft_sqrt(2));
// 	printf("the square root of %d is %d. \n", 4, ft_sqrt(4));
// 	printf("the square root of %d is %d. \n", 5, ft_sqrt(5));
// 	printf("the square root of %d is %d. \n", 13, ft_sqrt(13));
// 	printf("the square root of %d is %d. \n", 16, ft_sqrt(16));
// }
