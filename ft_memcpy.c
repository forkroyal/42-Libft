/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:41:01 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/30 11:11:23 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*mydest;
	unsigned char	*mysrc;

	mydest = (unsigned char *)dest;
	mysrc = (unsigned char *)src;
	if (!dest || !src)
		return (NULL);
	while (n-- > 0)
		*mydest++ = *mysrc++;
	return (dest);
}

// int	main(void)
// {
// 	char dest[5] = {"hello"};
// 	char src[5] = {"bybye"};
// 	printf("%s\n", dest);
// 	ft_memcpy(dest, src, 5);
// 	printf("%s\n", dest);
// }