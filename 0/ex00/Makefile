NAME		= 	exe_megaphone

SRCS		=	megaphone.cpp

OBJS		=	$(SRCS:%.c=%.o)

CC			= 	clang++

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror

%.o			:	%.c
				$(CC) $(CFLAGS) -c $< -o $@

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean		:
				$(RM) $(OBJS)
# pb sur la ligne du dessus, ca delete mon .cpp. Le probleme vient de la ligne 5
# (OBJS = $(SRCS:%.c=%.o))
# + rename l'exe en juste megaphone (comme demande dans le sujet)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re