SRC = main.cpp Serializer.cpp \

OBJ = $(SRC:.cpp=.o)

CXX =  -std=c++98

CXXFLAGS = -Wall -Wextra -Werror

NAME = Serializer

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