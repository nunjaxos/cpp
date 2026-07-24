CXX = c++
INCLUDES = Animal.hpp Cat.hpp Dog.hpp Brain.hpp
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)
NAME = poly

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re