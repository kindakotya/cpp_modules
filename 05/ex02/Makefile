# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/25 22:40:29 by gmayweat          #+#    #+#              #
#    Updated: 2021/09/19 19:06:10 by gmayweat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := you_need_form_28B

SRCS :=					main.cpp \
						Bureaucrat.cpp \
						Form.cpp \
						PresidentialPardonForm.cpp \
						ShrubberyCreationForm.cpp \
						RobotomyRequestForm.cpp

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
