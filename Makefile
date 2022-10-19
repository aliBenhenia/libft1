# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 21:19:28 by ncolomer          #+#    #+#              #
#    Updated: 2019/10/18 23:01:39 by ncolomer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
INC = libft.h
CRT := ar -crs
REMOVE := rm -rf

SRCS = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memset.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strrchr.c \
	  ft_strnstr.c \
	  ft_strncmp.c \
	  ft_strdup.c \
	  ft_calloc.c \
	  ft_memmove.c \
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putnbr_fd.c \
	  ft_putendl_fd.c \
	  ft_substr.c \
	  ft_strtrim.c \
	  ft_strjoin.c \


SRCSBONUS = ${SRCS} \
	  ft_lstnew.c \
	  ft_lstadd_front.c \
	  ft_lstadd_back.c \
	  ft_lstdelone.c \
	  ft_lstsize.c \
	  ft_lstlast.c \
	  ft_lstclear.c \
	  ft_lstiter.c \

OBJS := $(SRCS:.c=.o)

OBJSB := $(SRCSBONUS:.c=.o)

all: $(NAME)

bonus: $(OBJSB)
	$(CRT) $(NAME) $^


$(NAME): $(OBJS) $(INC)
	$(CRT) $@ $^
%.o: %.c
	cc $(FLAGS) -c $< -o $@


clean:
	$(REMOVE) $(OBJS) $(OBJSB)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all