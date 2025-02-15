# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/13 12:39:02 by glorza-p          #+#    #+#              #
#    Updated: 2025/01/13 22:14:59 by glorza-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_display_file.c

OBJS	= ${SRCS:.c=.o}

NAME	= ft_display_file 

CC	= cc

CFLAGS	= -Wall -Werror -Wextra

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
		${CC} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f $(NAME)

re:	fclean all
