CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 
RM		= rm -f
NAME	=Span
SRC		= main.cpp  btc
all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS)  $(SRC) -o $(NAME)  

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME) 

re:	fclean all