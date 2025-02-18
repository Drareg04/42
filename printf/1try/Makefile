SRCS = 

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c libft.h Makefile
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm:
	@norminette ${SRCS}
	@norminette libft.h

.PHONY : all clean fclean re
