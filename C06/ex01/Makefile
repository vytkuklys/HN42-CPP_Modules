# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkuklys <vkuklys@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 05:12:59 by vkuklys           #+#    #+#              #
#    Updated: 2021/12/22 18:55:12 by vkuklys          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Color codes

RESET	= \033[0m
BLUE	= \033[31m
GREEN	= \033[32m
YELLOW	= \033[33m

# Folders and Names
NAME		= Translator
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= .

SRCS		= main.cpp Serializer.cpp

# Compiler options
CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

###################################################
# The rest is done by the MakeFile automatically, #
# you should not have to modify it				  #
###################################################
all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@echo "$(YELLOW)\n      -> Building $(NAME) ...$(RESET)"
	@$(CC) $(CFLAGS) -o $@ $^
	@echo "$(GREEN)***   Project $(NAME) successfully compiled   ***\n$(RESET)"

clean:

fclean: clean
	@echo "$(BLUE)***   Deleting all objects from $(NAME)   ...   ***$(RESET)"
	@rm -rf $(NAME)
	@echo

re: fclean all

.PHONY: all clean fclean re test
