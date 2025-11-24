# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alamrani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/24 17:24:53 by alamrani          #+#    #+#              #
#    Updated: 2025/11/24 17:25:08 by alamrani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror
SRC = print_char.c print_str.c print_nbr.c print_hex.c \
	  print_ptr.c print_unsigned.c ft_printf.c
OBJ = $(SRC:.c=.o)
HEADER = ft_printf.h
ARCHIVE = ar rcs

all: $(NAME) 

$(NAME): $(OBJ)
	$(ARCHIVE) $(NAME) $(OBJ)
	@echo "libftprintf.a created successfully!"

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo "Object files removed."

fclean: clean
	rm -f $(NAME)
	@echo "libftprintf.a removed."

re: fclean all
	@echo "Rebuilt everything."

.PHONY: clean
