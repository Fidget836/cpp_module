SRCS = 		main.cpp				\
			Animal.class.cpp		\
			Dog.class.cpp			\
			Cat.class.cpp			\
			wrongAnimal.class.cpp	\
			wrongCat.class.cpp

OBJS	=	${SRCS:.cpp=.o}

CC = c++

NAME	=	Animal

FLAGS	=	-Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} : ${OBJS}
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re : fclean all

.PHONY: all fclean clean re
