# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/25 22:40:29 by gmayweat          #+#    #+#              #
#    Updated: 2021/09/04 20:19:38 by gmayweat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interface_recap

SRCS =					main.cpp


MATSRC = 				$(addprefix materias/,\
						AMateria.cpp \
						Ice.cpp \
						Cure.cpp \
						MateriaSource.cpp)

CHARSRC =				$(addprefix characters/,\
						Character.cpp)

INC = 					-I./src/materias \
						-I./src/characters

SRCS += $(MATSRC)
SRCS += $(CHARSRC)

SRCSP = $(addprefix src/,$(SRCS))

OBJDIR =	objs/ \
			$(addprefix objs/,\
			materias/ \
			characters/)

OBJS = $(SRCS:%.cpp=objs/%.o)

DEPENDS = $(OBJS:%.o=%.d)

FLAGS = -Wall -Wextra -Werror $(INC) -std=c++98 -pedantic -g

vpath %.o $(OBJDIR)
vpath %.d $(OBJDIR)
vpath %.cpp src

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $@

objs/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	clang++ $(FLAGS) -MMD -o $@ -c $<

-include $(DEPENDS)

clean:
	rm -rf $(OBJDIR)

fclean:
	rm -rf objs $(NAME)

re: fclean all
