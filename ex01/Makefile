NAME	=	Phonebook

SOURCE	=	Contact.cpp		\
			PhoneBook.cpp	\
			main.cpp

HEADERS	=	Contact.hpp		\
			PhoneBook.hpp

OBJECTS	=	$(SOURCE:.cpp=.o)

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

fclean:
			@$(RM) $(OBJECTS) $(NAME)

re:			fclean all
