/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:40:23 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/01 17:44:35 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n);

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return (42);
}

int	main (void)
{
	char *s1 = "hello";
	char *s2 = "hello";
	int len = 3;

	int ft = ft_memcmp(s1, s2, len);
	int og = memcmp(s1, s2, len);

	printf("%i\n", ft);
	printf("%i\n", og);
}