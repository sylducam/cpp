NAME = Intern
PATH_SRC = ./
PATH_OBJ = ./
PATH_INC = ./

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =		Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			Intern.cpp \
			main.cpp

OBJ = $(addprefix $(PATH_SRC), $(SRC:.cpp=.o))

.PHONY: clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
