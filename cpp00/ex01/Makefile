CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
NAME	= PhoneBook
SRC		= PhoneBook.cpp main.cpp
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