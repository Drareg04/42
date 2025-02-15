# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/13 12:39:02 by glorza-p          #+#    #+#              #
#    Updated: 2025/01/13 22:01:07 by glorza-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c\
	  srcs/ft_strlen.c srcs/ft_swap.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= cc

CFLAGS	= -Wall -Werror -Wextra -Iincludes

AR	= ar -rc
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f $(NAME)

re:	fclean all
