# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/25 22:40:29 by gmayweat          #+#    #+#              #
#    Updated: 2021/09/06 04:45:18 by gmayweat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = you_need_form_28B

SRCS =					main.cpp \
						Bureaucrat.cpp \
						Form.cpp \
						PresidentialPardonForm.cpp \
						ShrubberyCreationForm.cpp \
						RobotomyRequestForm.cpp

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
