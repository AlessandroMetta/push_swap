CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a

RM		=	rm -rf

SRCS	=	srcs/ft_atoi.c	\
			srcs/ft_isdigit.c	\
			srcs/ft_isspace.c	\
			srcs/ft_lstadd_back.c	\
			srcs/ft_lstadd_front.c	\
			srcs/ft_lstcreate.c	\
			srcs/ft_lstfree.c	\
			srcs/ft_lstlast.c	\
			srcs/ft_lstlen.c	\
			srcs/ft_lstnew.c	\
			srcs/ft_memcpy.c	\
			srcs/ft_split.c	\
			srcs/ft_strlcpy.c	\
			srcs/ft_strlen.c	\
			srcs/ft_strncmp.c	\
			srcs/utils.c	\
			srcs/ft_strchr.c	\
			srcs/allocation_checker.c 	\
			srcs/ft_putchar.c 	\
			srcs/ft_putstr.c 	\
			srcs/ft_putendl.c 	\


OBJS	=	$(SRCS:%.c=%.o)

$(NAME)	:	$(OBJS)
			ar -rc $(NAME) $(OBJS)

all		:	$(NAME)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all
