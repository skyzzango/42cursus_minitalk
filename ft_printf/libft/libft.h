/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:07:13 by hookang           #+#    #+#             */
/*   Updated: 2021/06/04 19:07:18 by hookang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef unsigned char			t_uchar;
typedef unsigned short			t_ushort;
typedef unsigned int			t_uint;

typedef int						t_bool;
typedef void *					t_ptr;

t_bool		ft_isbetween(int a, int b, int c);
t_bool		ft_islower(int c);
t_bool		ft_isupper(int c);
t_bool		ft_isspace(int c);
t_bool		ft_isalpha(int c);
t_bool		ft_isdigit(int c);
t_bool		ft_isalnum(int c);
t_bool		ft_isascii(int c);
t_bool		ft_isprint(int c);

size_t		ft_strlen(const char *s);
size_t		ft_nbrlen(int nbr);

void		ft_bzero(void *dst, size_t len);
t_ptr		ft_memset(void *dst, int c, size_t len);
t_ptr		ft_memcpy(void *dst, const void *src, size_t len);
t_ptr		ft_memccpy(void *dst, const void *src, int c, size_t len);
t_ptr		ft_memmove(void *dst, const void *src, size_t len);
t_ptr		ft_memchr(const void *src, int c, size_t len);
int			ft_memcmp(const void *s1, const void *s2, size_t len);

size_t		ft_strlcpy(char *dst, char const *src, size_t len);
size_t		ft_strlcat(char *dst, const char *src, size_t len);
char		*ft_strchr(const char *src, int c);
char		*ft_strrchr(const char *src, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t len);
char		*ft_strnstr(const char *src, const char *find, size_t slen);

int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_atoi(const char *str);

t_ptr		ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *src);
char		*ft_stralloc(size_t size);

int			ft_str_isdigit(char *str);

char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

#endif
