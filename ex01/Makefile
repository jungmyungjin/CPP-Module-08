# Macro Variables 
CXXFLANGS = -Wall -Wextra -Werror -std=c++98
CXX=c++ $(CXXFLANGS)

# Custom Variables
SRCS = ./main.cpp \
	./span.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Span

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
.PHONY: all clean fclean re
