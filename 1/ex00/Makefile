NAME		= 	cemetery

SRCS		=	main.cpp\
				Zombie.cpp\
				newZombie.cpp\
				randomChump.cpp
# ICI ^

HEADER		=	Zombie.hpp

COMP		= 	clang++

RM			= 	rm

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

all			:	$(NAME)

$(NAME)		:	$(SRCS) $(HEADER)
				$(COMP) $(CFLAGS) $(SRCS) -o $(NAME) -Iinclude

clean		:
				$(RM) $(NAME)

fclean		:	clean

re			:	fclean all

.PHONY		:	all clean fclean re