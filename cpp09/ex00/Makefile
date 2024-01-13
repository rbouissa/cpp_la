CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 
RM		= rm -f
NAME	=Btc
SRC		= main.cpp  BitcoinExchange.cpp 
all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS)  $(SRC) -o $(NAME)  

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME) 

re:	fclean all