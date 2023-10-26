CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

RM		= rm -f
NAME	= Animal
SRC		= main.cpp  Dog.cpp Cat.cpp Animal.cpp wrongAnimal.cpp wrongCat.cpp
		

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS)  $(SRC) -o $(NAME)  

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME) 

re:	fclean all