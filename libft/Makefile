# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-feli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/14 11:32:53 by ade-feli          #+#    #+#              #
#    Updated: 2021/01/14 11:33:00 by ade-feli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
CFLAGS = -Wall -Wextra -Werror
CC = gcc
AR = ar rc
RM = rm -f

BSRCS = $(wildcard *lst*.c)
SRCS = $(filter-out $(BSRCS), $(wildcard *.c))
OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(BOBJS) $(OBJS)
	$(AR) $(NAME) $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
