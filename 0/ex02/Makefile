NAME		= 	bank

SRCS		=	Account.cpp\
				tests.cpp

HEADER		=	Account.hpp

COMP			= 	clang++

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

all			:	$(NAME)

$(NAME)		:	$(SRCS) $(HEADER)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME) -Iinclude

clean		:
				$(RM) $(OBJS)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re