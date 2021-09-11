# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/25 22:40:29 by gmayweat          #+#    #+#              #
#    Updated: 2021/09/11 20:29:38 by gmayweat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRCS =					main.cpp

OBJDIR = objs

OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

DEPENDS = $(OBJS:%.o=%.d)

FLAGS = -Wall -Wextra -Werror -I. -std=c++98 -pedantic

vpath %.o $(OBJDIR)
vpath %.d $(OBJDIR)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $@

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	clang++ $(FLAGS) -MMD -o $@ -c $<

-include $(DEPENDS)

clean:
	rm -rf $(OBJDIR)

fclean:
	rm -rf $(OBJDIR) $(NAME)

re: fclean all
