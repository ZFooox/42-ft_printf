# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 14:11:37 by jocroon           #+#    #+#              #
#    Updated: 2024/12/20 15:24:57 by jocroon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##########################################
## FILES

SOURCES 	= ft_printf.c 		\
	srcs/check_format.c			\
	srcs/print_char.c			\
	srcs/print_decimal.c		\
	srcs/print_hex_lower.c		\
	srcs/print_hex_upper.c		\
	srcs/print_percent.c		\
	srcs/print_pointer.c		\
	srcs/print_string.c			\
	srcs/print_unsigned.c

LIBRARY		= library/ft_itoa.c	\
	library/ft_utoa.c			\
	library/ft_putchar.c		\
	library/ft_putstr.c			\
	library/ft_strchr.c			\
	library/ft_strlen.c			\
	library/ft_int_len.c 		\
	library/ft_unsigned_int_len.c

INCLUDES 	= includes/ft_printf.h
OBJECTS = $(SOURCES:%.c=%.o) $(LIBRARY:%.c=%.o)

##########################################
## ARGUMENTS

NAME 		= libftprintf.a
CC 			= cc
RM 			= rm -f
AR 			= ar rc
CFLAGS 		= -Wall -Wextra -Werror -I includes

##########################################
## RULES

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
