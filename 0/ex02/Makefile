NAME		= 	phone_book_manager

SRCS		=	contact.class.cpp\
				main.cpp

HEADER		=	contact.class.hpp

OBJS		=	$(SRCS:%.cpp=%.o)

CC			= 	clang++

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

%.o			:	%.cpp $(HEADER)
				$(CC) $(CFLAGS) -c $< -o $@

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -Iinclude

clean		:
				$(RM) $(OBJS)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re