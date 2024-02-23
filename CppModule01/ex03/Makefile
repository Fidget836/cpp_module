SRCS = 		main.cpp				\
			Weapon.class.cpp		\
			HumanA.class.cpp		\
			HumanB.class.cpp		\

OBJS	=	${SRCS:.cpp=.o}

CC = c++

NAME	=	human

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
