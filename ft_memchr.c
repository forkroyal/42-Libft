/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:19:37 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/01 16:40:18 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	while ((unsigned char *)s && n > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			return ((unsigned char *)s);
		}
		s++;
		n--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char haystack[] = {'s', 'r', 's', 't', 'w', 'p', 'x'};
// 	char needle = 'p';

// 	char *position = ft_memchr(haystack, needle, 6);
// 	if (position == NULL)
// 		return (0);
// 	printf("%c\n", position[0]);
// 	printf("%c\n", position[1]);
// 	printf("%c\n", position[2]);
// }