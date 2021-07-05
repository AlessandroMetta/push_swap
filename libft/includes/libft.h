/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:58:23 by ametta            #+#    #+#             */
/*   Updated: 2021/07/05 09:24:05 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	struct s_list	*prec;
	int				data;
	struct s_list	*next;
}				t_list;

int				ft_atoi(const char *str);
t_list			*ft_lstnew(int num);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstfree(t_list *lst, void *last);
void			ft_putstr(char *s);
void			ft_putendl(char *s);
void			ft_putchar(char c);
void			ft_lstcreate(t_list **lista, char **values, int numVal);
int				ft_lstlen(t_list *lst);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
size_t			ft_strlen(const char *s);
char			**ft_split(const char *s, char c);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlen(const char *s);
int				ft_isdigit(int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_isspace(const char c);
char			*ft_strchr(const char *str, int c);

void			allocation_checker(void *something);
void			error_message(void);

#endif