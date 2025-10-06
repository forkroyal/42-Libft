/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 08:47:56 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/06 10:04:40 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);
int		how_many_words(char const *s, char c);
void	make_words(char const *s, char c);

void	make_words(char const *s, char c)
{
	int	i;
	int	j;
	int	len;
	int	old_i;

	i = 0;
	j = 0;
	while (s[i] && j < words)
	{
		len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			len++;
			i++;
		}
		char *word = malloc(sizeof(char) * len + 1);
		if (!word)
			return 0;
		pointerzuwords[j] = word; 
		j++;
		i = old_i;
		int k = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			word[k] = s[i];
			k++;
			i++;
		}
		word[k] = '\0';
		old_i = i;
	}
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
	int		i;

	pointerzuwords = malloc(sizeof(char *) * how_many_words(s, c) + 1);
	if (!pointerzuwords)
		return (0);
	i = 0;
	while (i < how_many_words(s, c))
	{
		i++;
	}
	pointerzuwords[i] = "suwi";
}

int	main(void)
{
	char s[] = "Warum habe ich immer Stress";
	char c = ' ';
	printf("%s\n", s);
	printf("The function how many words prints: %i\n", how_many_words(s, c));
}