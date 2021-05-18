# IN CASE OF DEBUGGING PURPOSE: gcc libft/*/*.c push_swap_/*/*.c -g

NAME	=	push_swap

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

RM = rm -f

SRCS =	sorting_program/srcs/main.c	\
		stack_action/srcs/p.c	\
		stack_action/srcs/s.c	\
		stack_action/srcs/r.c	\
		stack_action/srcs/rr.c	\
		libft/srcs/ft_lstnew.c	\
		libft/srcs/ft_lstprint.c	\
		libft/srcs/ft_lstlen.c	\
		libft/srcs/ft_lstlast.c	\
		libft/srcs/ft_lstfree.c	\
		libft/srcs/ft_lstcreate.c	\
		libft/srcs/ft_lstadd_back.c	\
		libft/srcs/ft_atoi.c	\
		libft/srcs/ft_split.c	\
		libft/srcs/ft_memcpy.c		\
		libft/srcs/ft_strlcpy.c		\
		libft/srcs/ft_strlen.c		\
		libft/srcs/ft_isdigit.c		\
		libft/srcs/ft_strncmp.c	\

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