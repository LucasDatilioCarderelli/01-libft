# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/01 10:39:53 by ldatilio          #+#    #+#              #
#    Updated: 2021/09/03 19:26:45 by ldatilio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		:= 	clang
RM		:=	rm -f
FLAGS 	:= 	-Wall -Wextra -Werror

INCLUDE	:= 	libft.h
NAME	:=	libft.a

SRCS	:= 	ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isalnum.c	\
			ft_tolower.c ft_toupper.c ft_strlen.c ft_strlcpy.c ft_strlcat.c 	\
			ft_atoi.c ft_strncmp.c ft_strnstr.c ft_strchr.c ft_strrchr.c
# ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c
# ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_itoa.c
# ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
# ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c

OBJS	:=	$(SRCS:.c=.o)

all: 		$(NAME)

$(NAME): 	$(OBJS) $(INCLUDE)
			ar -rcs $(NAME) $(OBJS)
			ranlib $(NAME)

.c.o:
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re
