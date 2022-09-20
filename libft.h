/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwatanab <wtnbrn1999@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 23:54:23 by rwatanab          #+#    #+#             */
/*   Updated: 2022/09/20 19:44:07 by rwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>
/*
CHAR_BIT	8							charに入るビット数
CHAR_MAX	SCHAR_MAX / UCHAR_MAX		charが表せる最大値
CHAR_MIN	SCHAR_MIN / 0				charが表せる最小値
INT_MAX		+32767						intが表せる最大値
INT_MIN		-32767						intが表せる最小値
LONG_MAX	+2147483647					longが表せる最大値
LONG_MIN	-2147483647					longが表せる最小値
MB_LEN_MAX	1							複バイト文字の最大バイト数
SCHAR_MAX	+127						signed charが表せる最大値
SCHAR_MIN	-127						signed charが表せる最小値
SHRT_MAX	+32767						shortが表せる最大値
SHRT_MIN	-32767						shortが表せる最小値
UCHAR_MAX	255							unsigned charが表せる最大値
UINT_MAX	65535						unsigned charが表せる最小値
ULONG_MAX	4294967295					unsigned longが表せる最大値
USHRT_MAX	65535						unsigned shortが表せる最小値
*/

typedef struct t_list
{
	void			*content;
	struct t_list	*next;
}	t_list;

int		ft_atoi(const char *str);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size);

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *s, int fd);

char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

int		ft_tolower(int c);
int		ft_toupper(int c);

#endif