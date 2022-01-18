NAME		= 	phonebookmanager

SRCS		=	contact.class.cpp\

HEADER		=	contact.class.hpp

OBJS		=	$(SRCS:%.cpp=%.o)

CC			= 	clang++

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98 -Iinclude

%.o			:	%.cpp $(HEADER)
				$(CC) $(CFLAGS) -c $< -o $@

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) main.cpp -o $(NAME) -Iinclude

clean		:
				$(RM) $(OBJS)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re