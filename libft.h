/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:33:28 by fsitter           #+#    #+#             */
/*   Updated: 2025/09/30 18:02:43 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h> //delete
# include <string.h>
# include <unistd.h>
# include <stdlib.h> //needed?

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
//memmove
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
//strlcat
int	ft_toupper(int c);
int	ft_tolower(int c);
//strchr
//strrchr
//strncmp
//memchr
//memcmp
//strnstr
int	ft_atoi(const char *nptr);

//part 2

//ft_substr
//ft_strjoin
//ft_strtrim
//ft_split
//ft_itoa
//ft_strmapi
//ft_striteri
//ftputchar fd
//ft putstr fd
//ft putendl fd
//ft putnbr fd

//bonus - add when done with part 2




#endif
