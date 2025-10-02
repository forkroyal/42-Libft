/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:33:28 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/02 11:53:37 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>  //delete
# include <stdlib.h> //needed?
# include <string.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n); // memmove not done
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
// strlcat
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);
// strnstr
int		ft_atoi(const char *nptr);

// part 2

// ft_substr
// ft_strjoin
// ft_strtrim
// ft_split
// ft_itoa
// ft_strmapi
// ft_striteri
// ftputchar fd
// ft putstr fd
// ft putendl fd
// ft putnbr fd

// bonus - add when done with part 2

#endif
