SRCS		=	megaphone.cpp

OBJS		= 	$(SRCS:srcs/%.c=objs/%.o)

NAME		= 	exe_megaphone

CC			= 	clang++

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror

objs/%.o	: 	srcs/%.c
				$(CC) $(CFLAGS) -c $< -o $@

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				ar rc $(NAME) $(OBJS)

clean		:
				$(RM) $(OBJS) $(BON_OBJS)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

bonus		:	$(BON_OBJS) $(OBJS)
				ar rc $(NAME) $(OBJS) $(BON_OBJS)

.PHONY		:	all clean fclean re
