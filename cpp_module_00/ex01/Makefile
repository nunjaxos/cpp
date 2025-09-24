NAME = PhoneBook

SRC = PhoneBook.cpp Contact.cpp DisplayContact.cpp PhoneBookUtils.cpp \

OBJ = $(SRC:.cpp=.o)

CF = -Wall -Wextra -Werror

CXX =  -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CF) $(CXX) $(OBJ) -o $(NAME)

%.o: %.cpp
	clang++ $(CF) $(CXX) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re