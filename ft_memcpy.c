/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:41:01 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/13 13:47:10 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*mydest;
	unsigned char	*mysrc;
	size_t			i;

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
// 	char dest[] = "";
// 	char *src = "hey";

// 	// char dest[10] = "";
// 	// char src[5] = "";

// 	size_t len = 5;

// 	printf("%s\n", dest);
// 	//ft_memcpy(NULL, "hello", len);
// 	printf("%s\n", dest);

// 	printf("safe       \n");

// 	char *des = NULL;
// 	char *sr = NULL;

// 	// char des[10] = "";
// 	// char sr[5] = "";

// 	printf("%s\n", des);
// 	memcpy(NULL, "hello", len);
// 	printf("%s\n", des);

// 	printf("safe       \n");

// }

// delete handeling