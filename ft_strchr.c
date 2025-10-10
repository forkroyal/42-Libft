/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:29:02 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/10 11:12:07 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strchr("", '\0'));
// }