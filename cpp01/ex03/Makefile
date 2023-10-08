CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
NAME	= Weapon
SRC		= main.cpp   Weapon.cpp HumanB.cpp HumanA.cpp
CXX = c++
		

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS)  $(OBJ) -o $(NAME)  

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME) 

re:	fclean all

b: all clean