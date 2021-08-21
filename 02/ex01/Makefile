# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/25 22:40:29 by gmayweat          #+#    #+#              #
#    Updated: 2021/08/21 22:36:12 by gmayweat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = more_useful_fixed_point_class

SRCS =					main.cpp \
						Fixed.cpp

HEAD =					Fixed.hpp

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
