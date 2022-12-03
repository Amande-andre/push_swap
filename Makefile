# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admin <admin@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 23:24:53 by anmande           #+#    #+#              #
#    Updated: 2022/11/30 16:31:52 by admin            ###   ########.fr        #
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
CFLAGS	= -Wall -Werror -Wextra

SRCDIR	= src
OBJDIR	= obj
INCDIR	= inc
LIBDIR	= libft

_SRC	= main.c \
		= ft_gatherarg.c \
		= ft_move.c \

SRC		= $(addprefix $(SRCDIR)/, $(_SRC))
OBJ	= $(SRC:$(SRCDIR)%.c=$(OBJDIR)%.o)
HEADER = $(addprefix $(INCDIR)/, $(NAME).h)

##### Makefile work ####

$(OBJDIR)/%.o:$(SRCDIR)/%.c $(HEADER)
	@mkdir -p $(OBJDIR)
	@$(CC) -c $(CFLAGS) -I$(INCDIR) -I$(LIBDIR) $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@echo "Baking $(LIBDIR)..."
	@make -s -C $(LIBDIR)
	@echo "$(GREEN)OK!$(END)"
	@echo "Baking $(NAME)..."
	@$(CC) -I$(INCDIR) -I$(LIBDIR) -o $@ $^ $(LIBDIR)/$(LIBNAME) $(CFLAGS)
	@echo "$(GREEN)OK!$(END)"
	@echo "$(BLUE)READY !$(END)"

clean:
	@echo "Removing objects..."
	@make clean -s -C $(LIBDIR)
	@rm -r $(OBJDIR) || true
	@echo "$(GREEN)Done!$(END)"

fclean: clean
	@echo "Cleaning everything..."
	@make fclean -s -C $(LIBDIR)
	@rm -f $(NAME)
	@echo "$(GREEN)Done!$(END)"
	@echo "$(BLUE)Everything is clean!$(END)"

re:	fclean all

.PHONY: all clean fclean re