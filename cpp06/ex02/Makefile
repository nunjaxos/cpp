SRC = main.cpp Base.cpp \

OBJ = $(SRC:.cpp=.o)

CXX =  -std=c++98

CXXFLAGS = -Wall -Wextra -Werror

NAME = dynamic_cast

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re