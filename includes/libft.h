/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecastong <ecastong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:58:45 by ecastong          #+#    #+#             */
/*   Updated: 2024/04/30 18:46:13 by ecastong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

/*Get_next_line.*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

// This is only for portability as OPEN_MAX is no longer used on linux systems.
# ifndef OPEN_MAX
#  define OPEN_MAX 10240
# endif

char		*get_next_line(int fd);

/*Libft functions.*/

int			ft_atoi(const char *str);	
void		ft_bzero(void *str, size_t len);
void		*ft_calloc(size_t count, size_t size);
int			ft_isalnum(int chr);
int			ft_isalpha(int chr);
int			ft_isascii(int chr);
int			ft_isdigit(int chr);
int			ft_isprint(int chr);
char		*ft_itoa(int num);
void		*ft_memchr(const void *src, int byte, size_t len);
int			ft_memcmp(const void *src1, const void *src2, size_t len);
void		*ft_memcpy(void *dest, const void *src, size_t len);
void		*ft_memmove(void *dest, const void *src, size_t len);
void		*ft_memset(void *str, int c, size_t len);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *str, int fd);
void		ft_putnbr_fd(int nb, int fd);
void		ft_putstr_fd(char *str, int fd);
char		**ft_split(const char *str, char c);
char		*ft_strchr(const char *str, int chr);
char		*ft_strdup(const char *src);
void		ft_striteri(char *str, void (*fnc)(unsigned int, char*));
char		*ft_strjoin(const char *str1, const char *str2);
size_t		ft_strlcat(char *dest, const char *src, size_t dest_size);
size_t		ft_strlcpy(char *dest, const char *src, size_t dest_size);
size_t		ft_strlen(const char *str);
char		*ft_strmapi(const char *str, char (*fnc)(unsigned int, char));
int			ft_strncmp(const char *str1, const char *str2, size_t nbr);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(const char *str, int chr);
char		*ft_strtrim(const char *str, const char *set);
char		*ft_substr(char const *str, unsigned int start, size_t len);
int			ft_tolower(int chr);
int			ft_toupper(int chr);

/*Bonus libft functions.*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void		ft_lstadd_back(t_list **list, t_list *new_node);
void		ft_lstadd_front(t_list **list, t_list *node);
void		ft_lstclear(t_list **list, void (*del)(void *));
void		ft_lstdelone(t_list *node, void (del)(void *));
void		ft_lstiter(t_list *list, void (*fnc)(void *));
t_list		*ft_lstlast(t_list *list);
t_list		*ft_lstmap(t_list *list, void *(*fnc)(void *), void (*del)(void *));
t_list		*ft_lstnew(void *content);
size_t		ft_lstsize(t_list *list);

/*My functions.*/

double		my_atof(const char *str);
size_t		my_atoh(const char *str);
long long	my_atoll(const char *str);
void		*my_freearr(void **array, size_t size);
int			my_hexchar_to_int(char hex);
int			my_intlen(int num, int base);
int			my_isset(char chr, const char *set);
int			my_isspace(int cr);
char		*my_jointhree(const char *str1, const char *str2, const char *str3);
void		my_lstdellast(t_list **list, void (del)(void *));
void		*my_safefree(void *ptr);
int			my_strcmp(const char *str1, const char *str2);
char		*my_strfreejoin(char *str1, char *str2);
char		*my_strndup(const char *src, size_t len);
void		my_strrealloc(char **str);

#endif