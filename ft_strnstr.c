/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:53:29 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/07 10:35:19 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i, j;
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i+j] != '\0' && big[i+j] == little[j] && j < len)
		{
			if (little[j+1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return(0);
}

// int	main(void)
// {

// 	const char *largestring = "Foo Bar Baz";
// 	const char *smallstring = "Baz";
// 	size_t lbsd = 20;
// 	char *ptr;
// 	char *ptr2;

//     ptr = ft_strnstr(largestring, smallstring, lbsd);
// 	printf("%s\n", ptr);

// 	// ptr2 = strnstr(largestring, smallstring, lbsd);
// 	// printf("%s\n", ptr2);
// }