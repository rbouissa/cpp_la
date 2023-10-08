CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

RM		= rm -f
NAME	= Fixed
SRC		= main.cpp Fixed.cpp
		

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS)  $(SRC) -o $(NAME)  

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME) 

re:	fclean all