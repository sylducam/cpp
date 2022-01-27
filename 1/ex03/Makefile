NAME		= 	weapon

SRCS		=	$(wildcard *.cpp)

HEADERS		=	$(wildcard *.hpp)

COMP		= 	clang++

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

all			:	$(NAME)

$(NAME)		:	$(SRCS) $(HEADERS)
				$(COMP) $(CFLAGS) $(SRCS) -o $(NAME) -Iinclude

clean		:
				$(RM) $(NAME)

fclean		:	clean

re			:	fclean all

.PHONY		:	all clean fclean re