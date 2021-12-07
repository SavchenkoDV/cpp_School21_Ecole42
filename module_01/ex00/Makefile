CL		=	clang++
CFLAGS	= 	-Werror -Wall -Wextra -std=c++98
NAME	=	zombies
SRC		=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJECT  =	$(SRC:.cpp=.o)

all:		$(NAME)
$(NAME): 	$(OBJECT)
			$(CL) $(CFLAGS) $(OBJECT) -o $(NAME)
.c.o:
			${CL} ${FLAGS} -c $<
clean:
			rm -f $(OBJECT)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
.PHONY:		all clean fclean re