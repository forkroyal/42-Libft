/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 08:47:56 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/11 11:50:15 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);
int		how_many_words(char const *s, char c);
char	**make_words(char **pointerzuwords, char const *s, char c);
void	*free_delete(char **pointerzuwords, int word);

void	*free_delete(char **pointerzuwords, int word)
{
	int	i;

	i = 0;
	while (i < word)
	{
		free(pointerzuwords[i]);
		i++;
	}
	free(pointerzuwords);
	return (NULL);
}

char	**make_words(char **pointerzuwords, char const *s, char c)
{
	int	i;
	int	len;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i + len] && s[i + len] != c)
		{
			len++;
		}
		pointerzuwords[word] = ft_substr(s, i, len);
		if (!pointerzuwords[word])
			return (free_delete(pointerzuwords, word));
		i += len;
		word++;
	}
	return (pointerzuwords);
}

int	how_many_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		if (s[i] == c)
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**pointerzuwords;

	if (!s)
		return (NULL);
	pointerzuwords = ft_calloc(sizeof(char *), (how_many_words(s, c)));
	if (!pointerzuwords)
		return (NULL);
	pointerzuwords = make_words(pointerzuwords, s, c);
	if (!pointerzuwords)
		return (NULL);
	return (pointerzuwords);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s = "hey du wie gehts dir du fuß";
// 	char c = ' ';
// 	printf("%s\n", s);

// 	int words = 0;
// 	words =  how_many_words(s, c);
// 	printf("The function how many words prints: %i\n", words);

// 	char **splitted = ft_split(s, c);
// 	printf("%li\n", sizeof(splitted));

// 	int f = 0;
// 	while (f < words)
// 	{
// 		printf("%p\t", splitted[f]);
// 		printf("%s\n", splitted[f]);
// 		f++;
// 	}

// 	free_delete(splitted, words);

// 	// while (0 < words)
// 	// {
// 	// 	printf("%p\t", splitted[words - 1]);
// 	// 	printf("%s\n", splitted[words - 1]);
// 	// 	words--;
// 	// }

// 	// printf("%p\n", splitted[words]);
// }