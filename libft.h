#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
} 					t_list;

int	ft_atoi(const char *str);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
void ft_lstfree(t_list *lst);

#endif