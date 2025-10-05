/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:37:53 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/05 14:24:02 by fsitter          ###   ########.fr       */
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
	char s[] = "hund hund hund hund hund hund";
	char c = ' ';
	
	//counting the words
	int i = 0;
	int words = 0;

	while (s[i] != '\0')
	{
		if (s[i] != '\0' && s[i] != c)
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
	// //hier pointer zu pointern mallocieren

	// //spliting words
	// i = 0;
	// int j = 0;
	// int len;
	// int old_i = 0;
	// while (s[i] && j < words)
	// {
	// 	len = 0;
	// 	while (s[i] && s[i] == c)
	// 		i++;
	// 	while (s[i] && s[i] != c)
	// 	{
	// 		len++;
	// 		i++;
	// 	}
	// 	j++;
	// 	printf("len%i: %i\n", j, len);
	// 	// hier einzelne strings mallocieren und befüllen
	// 	char *word = malloc(sizeof(char) * len + 1);
	// 	if (!word)
	// 		return 0;
		
	// 	i = old_i;
	// 	int k = 0;
	// 	while (s[i] && s[i] == c)
	// 		i++;
	// 	while (s[i] && s[i] != c)
	// 	{
	// 		word[k] = s[i];
	// 		k++;
	// 		i++;
	// 	}
	// 	word[k] = '\0';
	// 	old_i = i;
	// 	printf("%s\n", word);

	// }

	

}

