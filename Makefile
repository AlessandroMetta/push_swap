# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ametta <ametta@student.42roma.it>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 09:59:31 by ametta            #+#    #+#              #
#    Updated: 2021/07/05 09:23:07 by ametta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# IN CASE OF DEBUGGING PURPOSE: gcc */srcs/*.c -g

NAME			=	push_swap

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror

LIBFT			=	libft/libft.a
STACK_ACTION	=	stack_action/stack_action.a

RM		=	rm -f

SRCS	=	sorting_program/srcs/main.c	\
			sorting_program/srcs/args_checker.c	\
			sorting_program/srcs/sorting.c	\
			sorting_program/srcs/sortThree.c	\
			sorting_program/srcs/sortFive.c	\
			sorting_program/srcs/sortOneHundred.c	\
			sorting_program/srcs/utils.c	\
			sorting_program/srcs/sortFiveHundred.c	\

OBJ		=	$(SRCS:%.c=%.o)

$(NAME) :	$(OBJ)
			make -C libft
			make -C stack_action
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(STACK_ACTION)

all		:	$(NAME)

clean	:	
			make clean -C libft
			make clean -C stack_action
			$(RM) $(OBJ)

fclean	:	clean
			make fclean -C libft
			make fclean -C stack_action
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re