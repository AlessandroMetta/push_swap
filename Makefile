# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ametta <ametta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 09:59:31 by ametta            #+#    #+#              #
#    Updated: 2021/05/31 11:58:50 by ametta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# IN CASE OF DEBUGGING PURPOSE: gcc */srcs/*.c -g

NAME			=	push_swap

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror

FT_PRINT		=	libs/ft_printf/libftprintf.a
LIBFT			=	libs/libft/libft.a
STACK_ACTION	=	stack_action/stack_action.a

RM		=	rm -f

SRCS	=	sorting_program/srcs/main.c	\
			sorting_program/srcs/args_checker.c	\
			sorting_program/srcs/sorting.c	\
			sorting_program/srcs/sorting_tree.c	\
			sorting_program/srcs/sorting_five.c	\

OBJ		=	$(SRCS:%.c=%.o)

$(NAME) :	$(OBJ)
			make -C libs/libft
			make -C libs/ft_printf
			make -C stack_action
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(FT_PRINT) $(LIBFT) $(STACK_ACTION)

all		:	$(NAME)

clean	:	
			make clean -C libs/libft
			make clean -C libs/ft_printf
			make clean -C stack_action
			$(RM) $(OBJ)

fclean	:	clean
			make fclean -C libs/libft
			make fclean -C libs/ft_printf
			make fclean -C stack_action
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re