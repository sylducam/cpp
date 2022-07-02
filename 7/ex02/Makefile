NAME		= 	exe_array

SRCS		=	$(wildcard *.cpp)

HEADER		=	$(wildcard *.hpp)

COMP		= 	clang++

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

all			:	$(NAME)

$(NAME)		:	$(SRCS) $(HEADER)
				$(COMP) $(CFLAGS) $(SRCS) -o $(NAME)

clean		:
				$(RM) $(NAME)

fclean		:	clean

re			:	fclean all

.PHONY		:	all clean fclean re