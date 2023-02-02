# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtorun <mtorun@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 18:12:00 by mtorun            #+#    #+#              #
#    Updated: 2022/10/11 18:12:02 by mtorun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					= libftprintf.a

CC                                      = gcc

SRCS					= ft_printf.c ft_printf_utils.c 

OBJS					= $(SRCS:%.c=%.o)

FLAGS					= -Wall -Wextra -Werror

$(NAME)		:	$(OBJS)
			$(CC) $(FLAGS) -c $(SRCS) -I./
			ar rc $(NAME) $(OBJS)

all	:	$(NAME)

clean	:
		rm -f $(OBJS)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
