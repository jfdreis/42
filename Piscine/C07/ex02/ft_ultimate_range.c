/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 13:12:59 by jreis             #+#    #+#             */
/*   Updated: 2026/08/07 13:32:26 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (!*range)
		return (-1);
	i = 0;
	while (i + min < max)
	{
		(*range)[i] = i + min;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int	*dest;
// 	int	i;
// 	int	len;
// 	int	min;
// 	int	max;

// 	min = 4;
// 	max = 7;
// 	len = ft_ultimate_range(&dest, min, max);
// 	if (dest == NULL)
// 	{
// 		printf("The function did not create space");
// 		return (-1);
// 	}
// 	i = 0;
// 	while (i < len)
// 	{
// 		printf("%d ", dest[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf("The length is %d.\n", len);
// 	free(dest);
// 	return (0);
// }
