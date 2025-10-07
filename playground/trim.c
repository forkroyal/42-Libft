/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:30:51 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/07 16:54:04 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char    *ft_strtrim(char const *s1, char const *set);

char    *ft_strtrim(char const *s1, char const *set)
{
        size_t  len;
        size_t  sublen;
        char    *trimmed;
        size_t  i;
        size_t  j;

        len = ft_strlen(s1);
        i = 0;
		while (s1[i] && ft_strchr(set, s1[i]))
                i++;
        j = len - 1;
		while (j > i && ft_strchr(set, s1[j]))
                j--;
        sublen = j - i;
        trimmed = (char *)malloc(sizeof(char) * (sublen + 2));
        if (!trimmed)
                return (NULL);
        ft_memcpy(trimmed, s1 + i, sublen + 1);
        trimmed[sublen + 1] = '\0';
        return (trimmed);
}

int	main(void)
{
	char s[] = "heyhallohhey";
	char s2[] = "hey";

	char *s3;

	s3 = ft_strtrim(s, s2);
	printf("%s\n", s3);
}

// cc trim.c ../libft.h ../ft_strlen.c ../ft_memcpy.c ../ft_strchr.c -o hallo -g
