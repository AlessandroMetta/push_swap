CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	stack_action.a

RM		=	rm -rf

SRCS	=	srcs/p.c	\
			srcs/r.c	\
			srcs/rr.c	\
			srcs/s.c	\

OBJS	=	$(SRCS:%.c=%.o)

$(NAME)	:	$(OBJS)
			ar -rc $(NAME) $(OBJS)

all		:	$(NAME)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all
