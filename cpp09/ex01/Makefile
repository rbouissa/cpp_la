CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 
RM		= rm -f
NAME	=RPN
SRC		= main.cpp  RPN.cpp 
all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS)  $(SRC) -o $(NAME)  

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME) 

re:	fclean all