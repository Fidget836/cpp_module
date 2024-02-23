SRCS = 		main.cpp		\
			Zombie.cpp		\
			newZombie.cpp	\
			randomChump.cpp	\

OBJS	=	${SRCS:.cpp=.o}

CC = c++

NAME	=	zombie

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
