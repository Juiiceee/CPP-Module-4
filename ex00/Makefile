# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 12:22:14 by lbehr             #+#    #+#              #
#    Updated: 2024/05/22 17:24:24 by lbehr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= a.out
OBJ_DIR	:= obj
SRCS	:= Animal.cpp Cat.cpp Dog.cpp main.cpp
#ls *.cpp | tr "\n" " " | sed 's/\s$//' | xclip -selection clipboard
OBJS	:= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
DEPS	:= $(OBJS:.o=.d)
CC		:= c++
CFLAGS	:= -std=c++98 -g3
RM		:= rm -rf
DIR_DUP	= mkdir -p $(@D)

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	$(DIR_DUP)
	$(CC) -c $< $(CFLAGS) -MMD -MP -o $@

-include $(DEPS)

clean	:
	rm -rf $(OBJ_DIR)

fclean	:	clean
	$(RM) $(NAME)

re		:	clean all

.PHONY: all clean re