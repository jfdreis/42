/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:40:44 by jreis             #+#    #+#             */
/*   Updated: 2026/08/07 13:34:10 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ans;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min + 1;
	ans = malloc(sizeof(int) * len);
	if (!ans)
		return (NULL);
	i = 0;
	while (i + min < max)
	{
		ans[i] = i + min;
		i++;
	}
	return (ans);
}

// int	main(void)
// {
// 	int	*dest;
// 	int	i;
// 	int	min;
// 	int	max;

// 	min = 4;
// 	max = 5;
// 	dest = ft_range(min, max);
// 	if (dest == NULL)
// 	{
// 		printf("The function did not create space");
// 		return (-1);
// 	}
// 	i = 0;
// 	while (i < max - min)
// 	{
// 		printf("%d ", dest[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	if (dest[i] == '\0')
// 		printf("chegamos la");
// 	free(dest);
// 	return (0);
// }
