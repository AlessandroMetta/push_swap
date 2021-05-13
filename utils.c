#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	size_t	num;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r'
			|| str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

t_list	*ft_lstnew(void *content)
{
	t_list *elem;

	if (!(elem = malloc(sizeof(t_list))))
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	if (new)
	{
		last->next = new;
		new->next = NULL;
	}
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list *last;

	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}

void ft_lstfree(t_list *lst)
{
	t_list *this = lst;
	if (this->next)
		ft_lstfree(this->next);
	free(this);
}