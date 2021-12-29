# Macro Variables 
CXXFLANGS = -Wall -Wextra -Werror -std=c++98
CXX=clang++ $(CXXFLANGS)

# Custom Variables
SRCS = ./main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Easyfind

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
.PHONY: all clean fclean re
