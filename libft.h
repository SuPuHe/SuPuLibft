/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:00:25 by omizin            #+#    #+#             */
/*   Updated: 2025/03/12 09:34:30 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *block, int c, size_t size);
void	ft_bzero(void *block, size_t size);
void	*ft_memcpy(void *to, const void *from, size_t size);
void	*ft_memmove(void *to, const void *from, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *string, int c);
char	*ft_strrchr(const char *string, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
void	*ft_memchr(const void *block, int c, size_t size);
int		ft_memcmp(const void *a1, const void *a2, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *string);
void	*ft_calloc(size_t count, size_t eltsize);
char	*ft_strdup(const char *s);

#endif
