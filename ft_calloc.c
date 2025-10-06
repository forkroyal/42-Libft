/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:20:58 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/06 10:41:33 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);
// void	*ft_memset(void *s, int c, size_t n);

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	unsigned char	*str;
// 	unsigned char	ctr;
// 	int				i;

// 	i = 0;
// 	str = (unsigned char *)s;
// 	ctr = (unsigned char)c;
// 	while (n > i)
// 	{
// 		str[i] = ctr;
// 		i++;
// 	}
// 	return (s);
// }

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytesize;
	void	*pointer;

	bytesize = nmemb + size;
	pointer = malloc(bytesize);
	if (!pointer)
		return (NULL);
	ft_memset(pointer, 0, bytesize);
	return (pointer);
}

// int	main(void)
// {
// 	char *pointer;

// 	pointer = ft_calloc(5, sizeof(char));
// 	printf("%s\n", pointer);

// }