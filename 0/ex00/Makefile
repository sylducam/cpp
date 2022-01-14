NAME		= 	exe_megaphone

SRCS		=	megaphone.cpp

OBJS		=	%.c=%.o

CC			= 	clang++

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror

%.o			:	$(SRCS:%.c=%.o)
				$(CC) $(CFLAGS) -c $< -o $@

all			:	$(NAME)

#ICI
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