NAME	=	Account

SOURSE	=	Account.cpp	\
			tests.cpp

HEADERS	=	Account.hpp

OBJECTS	=	$(SOURSE:.cpp=.o)

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

.PHONY:	all clean fclean re

all:		$(NAME)

%.o: %.cpp
			$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJECTS)
			$(CC) $(FLAGS) $(OBJECTS) -I. -o $(NAME)

clean:
			@$(RM) $(OBJECTS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all