# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmande <anmande@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 16:23:01 by anmande           #+#    #+#              #
#    Updated: 2023/01/14 15:48:53 by anmande          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##### Colors ####
GREEN 	= \033[0;32m
RED 	= \033[0;31m
BLUE 	= \033[0;34m
END	= \033[0m

##### Names #####
NAME	= push_swap
LIBNAME	= libft.a
CC	= gcc
CFLAGS	= -Wall -Werror -Wextra -g3

SRCSDIR	= srcs
OBJSDIR	= objs
INCSDIR	= incs
LIBDIR	= libft

_SRCS	= push_swap.c ft_gatherarg.c move_a.c move_b.c sort.c utils.c check.c sort_three.c
SRCS	= $(addprefix $(SRCSDIR)/, $(_SRCS))
OBJS	= $(SRCS:$(SRCSDIR)%.c=$(OBJSDIR)%.o)
HEADER = $(addprefix $(INCSDIR)/, $(NAME).h)

##### Makefile work ####

$(OBJSDIR)/%.o:$(SRCSDIR)/%.c $(HEADER)
	@mkdir -p $(OBJSDIR)
	$(CC) -c $(CFLAGS) -I$(INCSDIR) -I$(LIBDIR) $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	@echo "Making $(LIBDIR)..."
	@make -s -C $(LIBDIR)
	@echo "$(GREEN)OK!$(END)"
	@echo "Making $(NAME)..."
	$(CC) -I$(INCSDIR) -I$(LIBDIR) -o $@ $^ $(LIBDIR)/$(LIBNAME) $(CFLAGS)
	@echo "$(GREEN)OK!$(END)"
	@echo "$(BLUE)READY !$(END)"

random_10 :
	seq 1 10 | sort -R | tr "\n" " "; echo

random_100 :
	seq 1 100 | sort -R | tr "\n" " "; echo

random_500 :
	seq 1 500 | sort -R | tr "\n" " "; echo
test5 : $(NAME)
	$(eval ARG = $(shell shuf -i 0-1000 -n 5))
		./push_swap $(ARG) | ./checker_linux $(ARG)
		@echo -n "Instructions: "
		@./push_swap $(ARG) | wc -l
test100 : $(NAME)
	$(eval ARG = $(shell shuf -i 0-1000 -n 100))
		./push_swap $(ARG) | ./checker_linux $(ARG)
		@echo -n "Instructions: "
		@./push_swap $(ARG) | wc -l

test500 : $(NAME)
	$(eval ARG = $(shell shuf -i 0-2000 -n 500))
		./push_swap $(ARG) | ./checker_linux $(ARG)
		@echo -n "Instructions: "
		@./push_swap $(ARG) | wc -l


clean:
	@echo "Removing objects..."
	@make clean -s -C $(LIBDIR)
	@rm -r $(OBJSDIR) || true	
	@echo "$(GREEN)Done!$(END)"

fclean: clean
	@echo "Cleaning everything..."
	@make fclean -s -C $(LIBDIR)
	@rm -f $(NAME)
	@echo "$(GREEN)Done!$(END)"
	@echo "$(BLUE)Everything is clean!$(END)"

re:	fclean all

.PHONY: all clean fclean re
