SRC = $(wildcard *.c)
SRCB = $(wildcard *bonus.c)
OBJS = ${SRC:.c=.o}
OBJSB = ${SRCB:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
LIBC = ar -rcs
RM = rm -f 

%.o: %.c libft.h
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

bonus: ${OBJSB}
	${LIBC} ${NAME} ${OBJSB}

all: ${NAME}

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}

re: fclean all
.PHONY: all clean fclean re