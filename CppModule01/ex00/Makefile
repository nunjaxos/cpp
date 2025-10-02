SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp 

OBJ = $(SRC:.cpp=.o)

CXX =  -std=c++98

CXXFLAGS = -Wall -Wextra -Werror

NAME = Zombie

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	clang++ $(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re