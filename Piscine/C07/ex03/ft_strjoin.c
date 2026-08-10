/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 13:39:22 by jreis             #+#    #+#             */
/*   Updated: 2026/08/10 10:28:07 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_get_req_space(int size, char **strs, char *sep);
char	*ft_size_zero(void);
void	ft_copy(char *dest, char *src, int *k);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		req_space;
	char	*dest;

	if (size == 0)
		return (ft_size_zero());
	req_space = ft_get_req_space(size, strs, sep);
	dest = malloc((req_space + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		ft_copy(dest, strs[i], &k);
		if (i < size - 1)
			ft_copy(dest, sep, &k);
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_size_zero(void)
{
	char	*dest;

	dest = (char *) malloc(1 * sizeof(char));
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	return (dest);
}

int	ft_get_req_space(int size, char **strs, char *sep)
{
	int	req_space;
	int	i;

	req_space = (size - 1) * ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		req_space += ft_strlen(strs[i]);
		i++;
	}
	return (req_space);
}

void	ft_copy(char *dest, char *src, int *k)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*k] = src[i];
		(*k)++;
		i++;
	}
}

// int	main(void)
// {
// 	char	*strs[] = {"Ola", "e", "adeus"};
// 	char	*result;

// 	result = ft_strjoin(3, strs, " - ");
// 	if (!result)
// 		return (1);
// 	printf("Result: %s\n", result);
// 	free(result);
// 	return (0);
// }
