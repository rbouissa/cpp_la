CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
NAME	= megaphone
SRC		= megaphone.cpp
OBJ	= $(SRC:.cpp=.o)
CXX = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS)  $(SRC) -o $(NAME)  

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME) 

re:	fclean all

b: all clean