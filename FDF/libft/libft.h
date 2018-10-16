/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 17:59:22 by smassand          #+#    #+#             */
/*   Updated: 2016/02/11 10:46:32 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# define BOEUF_SIZE 1024

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);

void				ft_putstr(char const *str);
void				ft_putchar(char c);
void				ft_putnbr(int n);
void				ft_putendl(char const *s);
void				ft_putstr_fd(const char *str, int fd);
void				ft_putchar_fd(char	c, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char const *s, int fd);

char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
void				ft_strclr(char *s);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s);
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
void				ft_striteri(char *s, void (*f) (unsigned int, char *));
char				*ft_strnew(size_t size);
void				ft_striter(char *s, void (*f) (char *));
size_t				ft_strlen(const char *s);
int					ft_atoi(const char *nptr);
int					ft_getnbr(char *str);
char				*ft_strmap(const char *s, char (*f) (char));
char				*ft_strmapi(const char *s, char (*f) (unsigned int, char));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(const char *s, char c);
char				*ft_itoa(int n);

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isspace(int c);
int					get_next_line(int const fd, char **line);

#endif
