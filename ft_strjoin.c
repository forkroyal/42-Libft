/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:28:38 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/10 11:34:57 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_joined;
	char	*joined;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	len_joined = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = malloc(sizeof(char) * len_joined);
	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	return (joined);
}

// int	main(void)
// {
// 	char s[] = "hallo";
// 	char s2[] = "bye";

// 	char *s3 = ft_strjoin(s, s2);
// 	printf("%s\n", s3);
// }