/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:48:46 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/08 15:28:10 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*mydest;
	const char	*mysrc;
	size_t			i;

	if (!dest || !src)
		return (0);
	mydest = dest;
	mysrc = src;
	i = 0;
	if (dest < src)
	{
		while (i++ < n)
			mydest[i] = mysrc[i];
	}
	else
	{
		while (i++ < n)
			mydest[n - i - 1] = mysrc[n - i - 1];
	}
	return (dest);
}

// int	main(void)
// {
// 	int	src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	int	dest[10];
// 	int	len;
// 	int	plus_dest;
// 	int	copy_this_much;
// 	int	i;

// 	len = sizeof(src) / sizeof(src[0]);
// 	plus_dest = 2;
// 	copy_this_much = len - plus_dest;
// 	ft_memmove(src + plus_dest, src, sizeof(int) * copy_this_much);
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%i\n", src[i]);
// 		i++;
// 	}
// }
