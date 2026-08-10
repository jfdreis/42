/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 09:16:22 by jreis             #+#    #+#             */
/*   Updated: 2026/07/28 09:16:25 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if ((str[i] <= 31) || (str[i] == 127))
		{
			write(1, "\\", 1);
			write(1, &hex[str[i] / 16], 1);
			write(1, &hex[str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	str[20] = "Hello\aHow are you?";
//
// 	ft_putstr_non_printable(str);
// }
//
// void	ft_putstr_non_printable(char *str)
// {
// 	int		i;
// 	char	aux;
// 	char	*hex;
// 
// 	hex = "0123456789abcdef"
// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (0 <= str[i] && str[i] <= 31)
// 		{
// 			write(1, "\\", 1);
// 			if (0 == (str[i] / 16))
// 				write(1, "0", 1);
// 			else if (1 == (str[i] / 16))
// 				write(1, "1", 1);
// 			if ((str[i] % 16) <= 9)
// 			{
// 				aux = str[i] % 16 + '0';
// 				write(1, &aux, 1);
// 			}
// 			else if (10 == (str[i] % 16))
// 				write(1, "a", 1);
// 			else if (11 == (str[i] % 16))
// 				write(1, "b", 1);
// 			else if (12 == (str[i] % 16))
// 				write(1, "c", 1);
// 			else if (13 == (str[i] % 16))
// 				write(1, "d", 1);
// 			else if (14 == (str[i] % 16))
// 				write(1, "e", 1);
// 			else if (15 == (str[i] % 16))
// 				write(1, "f", 1);
// 		}
// 		else
// 			write(1, &str[i], 1);
// 		i++;
// 	}
// }
