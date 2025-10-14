/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:41:01 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/14 09:10:17 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*mydest;
	unsigned char	*mysrc;
	size_t			i;

	while (dest == NULL && src == NULL && n)
		return (NULL);
	i = 0;
	mydest = (unsigned char *)dest;
	mysrc = (unsigned char *)src;
	while (n > i)
	{
		mydest[i] = mysrc[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("hello\n");
// 	ft_memcpy(NULL, NULL, 3); // segv segv
// 	// ft_memcpy(NULL, NULL, 0); //safe safe
// 	// ft_memcpy("hello", NULL, NULL); //safe safe
// 	// ft_memcpy("hello", NULL, 1); //segv segv
// 	// memcpy(NULL, "hello", 0); //safe safe
// 	// ft_memcpy(NULL, "hello", 2); //sagv segv
// 	printf("safe\n");
// }

// delete handeling