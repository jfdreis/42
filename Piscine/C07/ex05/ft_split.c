/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <jreis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:05:51 by jreis             #+#    #+#             */
/*   Updated: 2026/08/11 18:56:26 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_separator(char c, char *charset);
int		count_words(char *str, char *charset);
int		find_word_end(char *str, char *charset, int start);
char	*extract_word(char *str, int word_start, int word_end);

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	int		word_end;

	result = malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (is_separator(str[i], charset) == 0)
		{
			word_end = find_word_end(str, charset, i);
			result[j] = extract_word(str, i, word_end);
			i = word_end + 1;
			j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count_words;
	int	in_word;
	int	found_separator;

	i = 0;
	count_words = 0;
	in_word = 0;
	while (str[i])
	{
		found_separator = is_separator(str[i], charset);
		if (found_separator)
			in_word = 0;
		else if (found_separator == 0 && in_word == 0)
		{
			in_word = 1;
			count_words += 1 ;
		}
		i++;
	}
	return (count_words);
}

int	find_word_end(char *str, char *charset, int start)
{
	int	i;

	i = 0;
	while (str[start + i])
	{
		if (is_separator(str[start + i], charset))
			return (start + i - 1);
		i++;
	}
	return (start + i - 1);
}

char	*extract_word(char *str, int word_start, int word_end)
{
	char	*word;
	int		i;

	word = malloc((word_end - word_start + 1 + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (word_start + i <= word_end)
	{
		word[i] = str[word_start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*charset;
// 	char	**result;
// 	int		i;

// 	str = "...hello. world,goodbye; see you later, alligator.";
// 	charset = ",; .";
// 	result = ft_split(str, charset);
// 	if (!result)
// 		return (1);
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("result[%d] = \"%s\"\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }