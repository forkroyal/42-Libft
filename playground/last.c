/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:37:53 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/05 14:34:38 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c);

char **ft_split(char const *s, char c)
{
	return (0);
}

int	main(void)
{
	char s[] = "Warum habe ich immer Stress";
	char c = ' ';
	printf("%s\n", s);
	
	//counting the words
	int i = 0;
	int words;

	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
			{
				i++;
			}
		}
		if (s[i] == c)
			i++;
	}

	printf("words: %i\n", words);
	int size = words+1;
	//hier pointer zu pointern mallocieren
	char **pointerzuwords = malloc(sizeof(char*) * size);
	if (!pointerzuwords)
		return 0;
	//pointerzuwords[words+1] = "hure"; // sollte auf 0 gesetzt werden
	//printf("%s\n", pointerzuwords[size]);

	//spliting words
	i = 0;
	int j = 0;
	int len;
	int old_i = 0;
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
		
		
		printf("len%i: %i\n", j+1, len);
		// hier einzelne strings mallocieren und befüllen
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
		printf("%s\n", word);
		

	}
	pointerzuwords[j] = "suwi";

	printf("%i\n\n\n\n", j);
	int f = 0;
	while(f < j+1)
	{
		printf("%s\n", pointerzuwords[f]);
		f++;
	}
		

}

