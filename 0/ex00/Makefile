NAME		= 	exe_megaphone

SRCS		=	megaphone.cpp

OBJS		=	%.c=%.o

CC			= 	clang++

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror

%.o			:	$(SRCS)%.c // ICI
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

################################################################################

# NAME				=	push_swap

# #INCLUDES_PATH		=	include

# #HEADER				=	include/header_push_swap.h

# #PATH_LIBFT			=	libft

# # LIBFTA				=	libft.a

# # SRCS				=	$(addprefix srcs/,\

# OBJS				=	$(SRCS:srcs/%.c=objs/%.o)

# COMP				=	clang

# CFLAGS				=	-Iinclude#-Wall -Wextra -Werror -g3 -Iinclude

# RM					=	rm -rf

objs/%.o			:	srcs/%.c $(HEADER)
						$(COMP) $(CFLAGS) -c $< -o $@

all					:	libft $(NAME)

$(NAME)				:	$(OBJS)
						$(COMP) $(CFLAGS) $(LIBFTA) $(OBJS) main.c -o $(NAME) -I$(INCLUDES_PATH)

libft				:	
						$(MAKE) -C $(PATH_LIBFT)
						ln -sf $(PATH_LIBFT)/$(LIBFTA) .

clean				:
						$(RM) $(OBJS)
						$(MAKE) clean -C $(PATH_LIBFT)

fclean				:	clean
						$(RM) $(NAME) $(LIBFTA)
						$(MAKE) fclean -C $(PATH_LIBFT)

re					: 	fclean all

.PHONY				:	all libft clean fclean re