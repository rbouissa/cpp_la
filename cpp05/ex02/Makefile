CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 
RM		= rm -f
NAME	= Bureaucrat
SRC		= main.cpp  Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp PresidentialPardonForm.hpp RobotomyRequestForm.cpp RobotomyRequestForm.hpp ShrubberyCreationForm.cpp ShrubberyCreationForm.hpp
OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS)  $(SRC) -o $(NAME)  

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME) 

re:	fclean all