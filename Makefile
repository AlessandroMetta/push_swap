# IN CASE OF DEBUGGING PURPOSE: gcc libft/*/*.c push_swap_/*/*.c -g

NAME	=	push_swap

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

RM = rm -f

SRCS =	push_swap_/srcs/main.c 	\
		push_swap_/srcs/stackA_action.c 	\
		push_swap_/srcs/stackB_action.c 	\
		libft/srcs/ft_lstnew.c 	\
		libft/srcs/ft_lstprint.c 	\
		libft/srcs/ft_lstlen.c 	\
		libft/srcs/ft_lstlast.c 	\
		libft/srcs/ft_lstfree.c 	\
		libft/srcs/ft_lstcreate.c 	\
		libft/srcs/ft_lstadd_back.c 	\
		libft/srcs/ft_atoi.c 	\

OBJ		=	$(SRCS:%.c=%.o)

$(NAME) :	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -g

all		:	$(NAME)

clean	:	
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re