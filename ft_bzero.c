/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:29:52 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/30 10:38:39 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n-- > 0)
		*str++ = '\0';
}

// int	main(void)
// {
// 	char test[5] = {"hello"};
// 	printf("%s\n", test);
// 	ft_bzero(test + 1, sizeof(char) * 2);
// 	// memset(test+1, 'a', sizeof(char) * 2);
// 	// printf("%s\n", ft_memset(test + 1, 'x', 2));
// 	printf("%s\n", test);
// }