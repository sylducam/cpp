NAME		= 	ref

SRCS		=	main.cpp

COMP		= 	clang++

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

all			:	$(NAME)

$(NAME)		:	$(SRCS)
				$(COMP) $(CFLAGS) $(SRCS) -o $(NAME)

clean		:
				$(RM) $(NAME)

fclean		:	clean

re			:	fclean all

.PHONY		:	all clean fclean re