/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 10:22:13 by jreis             #+#    #+#             */
/*   Updated: 2026/07/28 10:22:17 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_address_hex(void *addr);
void	print_str_hex(char *str, unsigned int size);
void	print_str(char *str);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	lines;

	i = 0;
	lines = (size + 15) / 16;
	while (i < lines)
	{
		print_address_hex((addr + i * 16));
		print_str_hex(addr + i * 16, size - i * 16);
		print_str(addr + i * 16);
		write(1, "\n", 1);
		i++;
	}
	return (addr);
}

void	print_address_hex(void *addr)
{
	char			*base;
	char			hex[17];
	int				i;
	unsigned long	n;

	n = (unsigned long)addr;
	base = "0123456789abcdef";
	i = 16;
	while (i > 0)
	{
		i--;
		hex[i] = base[n % 16];
		n = n / 16;
	}
	write(1, hex, 16);
	write(1, ": ", 2);
}

void	print_str_hex(char *str, unsigned int size)
{
	int		i;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	while (i < 16 && i < (int) size)
	{
		write(1, &base[str[i] / 16], 1);
		write(1, &base[str[i] % 16], 1);
		if (1 == (i % 2))
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (1 == (i % 2))
			write(1, " ", 1);
		i++;
	}
}

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] && i < 16)
	{
		if ((str[i] <= 31) || (str[i] == 127))
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	str[] = "Hello\na I want a very  
// big text that is quite long so that I am sure it is";
// 	int		i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	ft_print_memory((void *) str, i);
// }
