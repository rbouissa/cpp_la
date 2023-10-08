CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
RM		= rm -f
NAME	= sed
SRC		= main.cpp 
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