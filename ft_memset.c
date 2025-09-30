/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:54:39 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/30 10:38:40 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n-- > 0)
		*str++ = (unsigned char)c;
	return (s);
}

// int	main(void)
// {
// 	char test[5] = {"hello"};
// 	printf("%s\n", test);
// 	ft_memset(test+1, 'X', sizeof(char) * 2);
// 	//memset(test+1, 'a', sizeof(char) * 2);
// 	// printf("%s\n", ft_memset(test + 1, 'x', 2));
// 	printf("%s\n", test);
// }