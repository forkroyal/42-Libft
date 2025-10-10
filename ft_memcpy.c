/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:41:01 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/10 16:28:04 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*mydest;
	unsigned char	*mysrc;
	size_t			i;

	if (!dest && !src)
		return (dest);
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

// int	main(void)
// {
// 	char dest[6] = {"hello"};
// 	char src[5] = {"byby"};

// 	printf("%s\n", dest);
// 	ft_memcpy(NULL, src, 5);
// 	printf("%s\n", dest);

// 	// printf("%s\n", dest);
// 	// memcpy(dest, src, NULL);
// 	// printf("%s\n", dest);

// }