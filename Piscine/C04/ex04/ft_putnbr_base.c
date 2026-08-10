/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 16:25:34 by jreis             #+#    #+#             */
/*   Updated: 2026/07/30 16:26:20 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_base(char *base);
void	ft_putnbr_base_aux(int nbr, char *base, int base_len);
void	ft_putnbr_base(int nbr, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_check_base(base);
	if (base_len < 2)
		return ;
	ft_putnbr_base_aux(nbr, base, base_len);
}

int	ft_check_base(char *base)
{
	int	base_len;
	int	i;
	int	j;

	base_len = 0;
	while (base[base_len])
	{
		if ((base[base_len] == '+') || (base[base_len] == '-'))
			return (0);
		base_len++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (base_len);
}

void	ft_putnbr_base_aux(int nbr, char *base, int base_len)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr <= -base_len)
			ft_putnbr_base_aux(-(nbr / base_len), base, base_len);
		write(1, &base[-(nbr % base_len)], 1);
		return ;
	}
	if (nbr >= base_len)
		ft_putnbr_base_aux(nbr / base_len, base, base_len);
	write(1, &base[nbr % base_len], 1);
}

// int	main(void)
// {
// 	ft_putnbr_base(42, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-42, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-2147483648, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-42, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-2147483648, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "poneyvif");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-2147483648, "poneyvif");
// 	ft_putnbr_base(-255, "0123456789ABCDEF");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
// 	write(1, "\n\n", 2);
// 	ft_putnbr_base(42, "");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "0");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "00");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "01+");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "01-");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "aa");
// 	write(1, "\n", 1);
// 	return (0);
// }
