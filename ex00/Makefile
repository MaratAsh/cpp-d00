EXEC = megaphone

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.cpp.o)

COMPILER = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(EXEC)

$(EXEC): $(OBJS)
		$(COMPILER) $(FLAGS) $(OBJS) -o $(EXEC)

%.cpp.o: %.cpp
		$(COMPILER) $(FLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean:
		rm -f $(OBJS) $(EXEC)

re: fclean all
