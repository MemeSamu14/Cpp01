NAME = ex03

HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

CC = c++
CFLAGS = -Wall -Werror -Wextra -g -std=c++98

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

all: $(NAME) 

$(UTILS):
	$(MAKE) -C $(UTILS_DIR)

$(NAME): $(HEADERS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)

.PHONY: all clean fclean re

