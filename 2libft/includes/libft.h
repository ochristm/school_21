/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochristm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:51:15 by ochristm          #+#    #+#             */
/*   Updated: 2019/09/09 19:50:55 by ochristm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/*
** From stdlib.h
*/

int					ft_atoi(const char *str);
int					ft_atoi_base(const char *str, int base);
char				*ft_itoa(int n);
char				*ft_itoa_base(int value, int base);
void				*ft_realloc(void *ptr, size_t size);
void				*ft_calloc(size_t count, size_t size);
void				ft_qsort(void *base, size_t nmemb, \
		size_t size, int (*fcmp)(void *, void *));

/*
** From string.h
*/

int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little, size_t ln);
char				*ft_strdup(const char *s1);
char				*ft_strnew(size_t size);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(const char *s, char c);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_memdel(void **ap);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memalloc(size_t size);
size_t				ft_strlen(const char *str);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
void				ft_bzero(void *s, size_t n);

/*
** From ctype.h
*/

int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isblank(int c);
int					ft_iscntrl(int c);
int					ft_isdigit(int c);
int					ft_isgraph(int c);
int					ft_islower(int c);
int					ft_isspace(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isprint(int c);

/*
** From stdio.h
*/

void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putnchar(char c, int n);
void				ft_putstr(const char *s);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl(const char *s);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putunbr(uintmax_t n);

/*
** From math.h
*/

double				ft_sqrt(double x);

#endif
