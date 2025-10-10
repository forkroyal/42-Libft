/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:20:58 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/10 14:40:40 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytesize;
	void	*pointer;
	size_t	mione;

	mione = -1;
	if (nmemb == 0 || size == 0)
		return (ft_strdup(""));
	if (mione / size < nmemb)
		return (NULL);
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

// 	// pointer = ft_calloc(NULL, sizeof(char));
// 	// printf("%p\n", pointer);

// 	pointer = calloc(NULL, sizeof(char));
// 	printf("%p\n", pointer);

	

// }