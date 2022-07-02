<<<<<<< HEAD
NAME		= 	exe_scalar
=======
NAME		= 	exe_convert
>>>>>>> 488e5e28966d88eed9bad7a2ce8ab2cfeed73f9e

SRCS		=	$(wildcard *.cpp)

HEADER		=	$(wildcard *.hpp)

COMP		= 	clang++

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

all			:	$(NAME)

$(NAME)		:	$(SRCS) $(HEADER)
<<<<<<< HEAD
				$(COMP) $(CFLAGS) $(SRCS) -o $(NAME) -Iinclude
=======
				$(COMP) $(CFLAGS) $(SRCS) -o $(NAME)
>>>>>>> 488e5e28966d88eed9bad7a2ce8ab2cfeed73f9e

clean		:
				$(RM) $(NAME)

fclean		:	clean

re			:	fclean all

.PHONY		:	all clean fclean re