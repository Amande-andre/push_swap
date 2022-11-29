# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmande <anmande@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 23:24:53 by anmande           #+#    #+#              #
#    Updated: 2022/11/26 04:20:09 by anmande          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#LIBFT = ../libft/libft.a

NAME = push_swap

CC = gcc -o $(NAME)

CFLAGS = -Wall -Wextra -Werror

SRC =	
		
#BONUS_SRC = 
			
OBJ = ${SRC:.c=.o}

OBJ_BONUS = ${BONUS_SRC:.c=.o}


$(NAME): ${OBJ} #$(LIBFT)
#	cp libft/libft.a $(NAME)
#	ar -rcs ${NAME} ${OBJ}

#$(LIBFT):
#	make -C ./libft

all: $(NAME)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean: 
	/bin/rm -f *.o
	/bin/rm -f */*.o

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(LIBFT)

re: fclean all

tclean:
	rm exec

.PHONY: all clean fclean bonus re
