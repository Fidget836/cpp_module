SRCS = megaphone.cpp		\

OBJS	=	${SRCS:.c=.o}

CC = g++

NAME	=	megaphone

FLAGS	=	-Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} : ${SRCS}
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
		rm -f ${OBJ}

fclean : clean
		rm -f ${NAME}

re : fclean all

.PHONY: all fclean clean re
