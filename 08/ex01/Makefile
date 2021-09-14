# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/25 22:40:29 by gmayweat          #+#    #+#              #
#    Updated: 2021/09/12 03:27:18 by gmayweat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

SRCS =					main.cpp \
						span.cpp

OBJDIR = objs

OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

DEPENDS = $(OBJS:%.o=%.d)

FLAGS = -Wall -Wextra -Werror -I. -std=c++98 -pedantic -g

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
