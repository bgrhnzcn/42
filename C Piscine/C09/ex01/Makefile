SRCS = ${shell pwd}/srcs/

SOURCE_FILES = ${SRCS}ft_putchar.c ${SRCS}ft_putstr.c ${SRCS}ft_strcmp.c ${SRCS}ft_strlen.c ${SRCS}ft_swap.c

SOURCE_OBJECTS = ${SOURCE_FILES:.c=.o}

INCLUDES = ${shell pwd}/includes/

NAME = libft.a

COMPILER = gcc

FLAGS = -Wall -Werror -Wextra

all: ${NAME}

${SOURCE_OBJECTS}: ${SOURCE_FILES}
	${COMPILER} ${FLAGS} -I ${INCLUDES} -c $< -o $@

${NAME}: ${SOURCE_OBJECTS}
	ar -rcs ${NAME} ${SOURCE_OBJECTS}

clean:
	rm -f ${SOURCE_OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re