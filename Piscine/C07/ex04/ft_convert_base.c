/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:30:14 by jreis             #+#    #+#             */
/*   Updated: 2026/08/10 14:45:25 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_check_base(char *base);
int		ft_base_index(char c, char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_len_number_in_base(int nbr, char *base);
int		ft_len_number_in_base_aux(int nbr, int base_len);
void	ft_putnbr_in_char_base(int nbr, char *base,
			char *dest, int len_number_in_base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	int		len_number_in_base_to;
	char	*result;

	if (ft_check_base(base_from) < 2 || ft_check_base(base_to) < 2)
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	len_number_in_base_to = ft_len_number_in_base(number, base_to);
	result = malloc((len_number_in_base_to + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_putnbr_in_char_base(number, base_to, result, len_number_in_base_to);
	return (result);
}

// I have an int number. I want to check its length in a certain base.
int	ft_len_number_in_base(int nbr, char *base)
{
	int	base_len;
	int	i;

	base_len = ft_check_base(base);
	if (base_len < 2)
		return (0);
	i = 0;
	if (nbr < 0)
	{
		i++;
		if (nbr <= -base_len)
			nbr = -(nbr / base_len);
		i++;
	}
	while (nbr >= base_len)
	{
		nbr = nbr / base_len;
		i++;
	}
	if (nbr > 0)
		i++;
	return (i);
}

// Writes the number as a string in the destination 
void	ft_putnbr_in_char_base(int nbr, char *base,
		char *dest, int len_number_in_base)
{
	int	i;
	int	base_len;
	int	negative;
	int	digit;

	base_len = ft_check_base(base);
	negative = 0;
	if (base_len < 2)
		return ;
	i = len_number_in_base - 1;
	dest[len_number_in_base] = '\0';
	if (nbr < 0)
		negative = 1;
	if (negative)
		dest[0] = '-';
	while (negative <= i)
	{
		digit = nbr % base_len;
		if (digit < 0)
			digit = -digit;
		dest[i] = base[digit];
		nbr = nbr / base_len;
		i--;
	}
}

// int	main(void)
// {
// 	char	*result;

// 	result = ft_convert_base("-2", "0123456789", "01");
// 	if (!result)
// 		return (1);
// 	printf("Result: %s\n", result);
// 	free(result);
// 	return (0);
// }

// int	ft_len_number_in_base_aux(int nbr, int base_len)
// {
// 	int	len;

// 	len = 0;
// 	if (nbr < 0)
// 	{
// 		len += 1;
// 		if (nbr <= -base_len)
// 			len += ft_len_number_in_base_aux(-(nbr / base_len), base_len);
// 		len += 1;
// 		return (len);
// 	}
// 	if (nbr >= base_len)
// 		len += ft_len_number_in_base_aux(nbr / base_len, base_len);
// 	len += 1;
// 	return (len);
// }
// 
// int	ft_len_number_in_base_old(int nbr, char *base)
// {
// 	int	base_len;
// 	int i=0;
// 	int	original_number;

// 	original_number = nbr;
// 	base_len = ft_check_base(base);
// 	if (base_len < 2)
// 		return (0);
// 	printf("The lenght of the number %d in base %s is %d\n",
// nbr, base, ft_len_number_in_base_aux(nbr, base_len));
// 	return (ft_len_number_in_base_aux(nbr, base_len));
// }