CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
NAME	= Harl
SRC		= main.cpp Harl.cpp
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