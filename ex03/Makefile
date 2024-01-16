NAME = claptrap
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
FLAGSXX = -Wall -Wextra -Werror -g -std=c++98 -Wshadow #-Wno-shadow

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGSXX) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGSXX) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re