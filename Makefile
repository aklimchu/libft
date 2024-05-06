# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 11:18:05 by aklimchu          #+#    #+#              #
#    Updated: 2024/05/06 13:56:15 by aklimchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isascii.c ft_memmove.c \
	ft_strdup.c	ft_strnstr.c \
	ft_isdigit.c ft_memset.c \
	ft_striteri.c ft_strrchr.c \
	ft_isprint.c ft_putchar_fd.c \
	ft_strjoin.c ft_strtrim.c \
	ft_atoi.c ft_itoa.c \
	ft_putendl_fd.c	ft_strlcat.c \
	ft_substr.c ft_bzero.c \
	ft_putnbr_fd.c \
	ft_strlcpy.c ft_tolower.c \
	ft_calloc.c	ft_memchr.c \
	ft_putstr_fd.c ft_strlen.c \
	ft_toupper.c ft_isalnum.c \
	ft_memcmp.c	ft_split.c \
	ft_strmapi.c ft_isalpha.c \
	ft_memcpy.c	ft_strchr.c \
	ft_strncmp.c 

BONUS_SRC = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c ft_lstclear_bonus.c \
	ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

INCLUDE = libft.h

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $^ -c -o $@ -I $(INCLUDE)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: .bonus
	
.bonus:	$(BONUS_OBJ) $(OBJ)
	ar -rcs $(NAME) $?
	touch .bonus
	
clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all test clean fclean re bonus
