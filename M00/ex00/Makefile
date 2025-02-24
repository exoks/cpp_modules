# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/05 12:57:51 by oezzaou           #+#    #+#              #
#    Updated: 2023/08/29 19:29:02 by oezzaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
################################################################################
#                               VARIABLES:                                     #
################################################################################
NAME		:= megaphone
CPPFLAGS	:= -Wall -Wextra -Werror -std=c++98
CC			:= c++
OBJS_DIR	:= objs
SRCS		:= $(wildcard *.cpp)
OBJS		:= $(addprefix $(OBJS_DIR)/, $(addsuffix .o, $(basename $(SRCS))))
RM			:= rm -rf

################################################################################
#                                RULES:                                        #
################################################################################
all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CPPFLAGS) $^ -o $@

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
	@$(CC) $(CPPFLAGS) -c $< -o $@
	@printf "Compling... %-10s >>>> %s.\n" "$<" "$@"

run:
	@./$(NAME) "shhhhh... I think the students are asleep..."

$(OBJS_DIR):
	@mkdir -p $@

clean:
	@${RM} $(OBJS_DIR)

fclean: clean
	@${RM} $(NAME)

re: fclean all

.PHONY: all run clean fclean re
################################# (END) ########################################
