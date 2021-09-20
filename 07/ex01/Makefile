# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/25 22:40:29 by gmayweat          #+#    #+#              #
#    Updated: 2021/09/20 03:35:18 by gmayweat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRCS =					main.cpp


OBJDIR := objs

OBJS := $(SRCS:%.cpp=$(OBJDIR)/%.o)

DEPENDS := $(OBJS:%.o=%.d)

FLAGS := -Wall -Wextra -Werror -I. -std=c++98 -pedantic

vpath %.o $(OBJDIR)
vpath %.d $(OBJDIR)

.PHONY: all clean fclean re dir

all: $(OBJDIR) $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $@

$(OBJDIR)/%.o: %.cpp
	clang++ $(FLAGS) -MMD -o $@ -c $<

-include $(DEPENDS)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean:
	rm -rf $(OBJDIR) $(NAME)

re: fclean all
