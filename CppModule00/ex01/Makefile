SRCS =	main.cpp			\
		Phonebook.cpp		\

SRCS_H = Phonebook.hpp

OBJS	=	${SRCS:.c=.o}

CC = g++

NAME	=	Phonebook

FLAGS	=	-Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} : ${SRCS}
	$(CC) $(FLAGS) $(SRCS) $(SRCS_H) -o $(NAME)

clean :
		rm -f ${OBJ}

fclean : clean
		rm -f ${NAME}

re : fclean all

.PHONY: all fclean clean re
