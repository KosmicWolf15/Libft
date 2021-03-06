# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/01 17:37:49 by pgarcia-          #+#    #+#              #
#    Updated: 2022/02/01 17:37:50 by pgarcia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME	= libft.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -I. ##-g3 -fsanitize=address
#LDFLAGS = -fsanitize=address
##DEPS	= libft.h
SRCS	=	ft_strlcat.c	\
			ft_isalnum.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_strlen.c		\
			ft_isprint.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strnstr.c	\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_strncmp.c	\
			ft_memchr.c		\
			ft_memmove.c	\
			ft_strdup.c		\
			ft_calloc.c		\
			ft_atoi.c		\
			ft_substr.c		\
			ft_memcmp.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_strmapi.c	\
			ft_striteri.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_itoa.c		\
			ft_lstsize.c	\
			ft_strlcpy.c

BONUS	=	ft_lstnew.c		\
			ft_lstlast.c	\
			ft_lstdelone.c	\
			ft_lstadd_back.c\
			ft_lstadd_front.c\
			ft_lstclear.c	\
			ft_lstmap.c		\
			ft_lstiter.c	\

OBJS		=	$(SRCS:.c=.o)
BONUS_OBJS	=  $(BONUS:.c=.o)

#Explicitas#

all:		$(NAME)

.c.o:
		$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

fclean:		clean
	$(RM) $(NAME) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS)

re:			fclean all

bonus:		$(OBJS) $(BONUS_OBJS)
		ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: fclean clean all re bonus
