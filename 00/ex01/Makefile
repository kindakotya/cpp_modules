# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/25 22:40:29 by gmayweat          #+#    #+#              #
#    Updated: 2021/08/11 19:21:31 by gmayweat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_awesome_phonebook

SRCS =					Phonebook.cpp \
						Contact.cpp \
						main.cpp

HEAD =					Phonebook.hpp \
						Contact.hpp

OBJS = $(SRCS:.cpp=.o)

OBJDIR = objs

OBJSPATH = $(addprefix $(OBJDIR)/, $(OBJS))

FLAGS = -Wall -Wextra -Werror -I. -std=c++98

vpath %.o objs

.Phony: all $(NAME) %.o clean fclean re $(OBJDIR)

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	clang++ $(FLAGS) $(OBJSPATH) -o $(NAME)

%.o: %.cpp $(HEAD)
	clang++ $(FLAGS) -o $(addprefix objs/, $@) -c $<

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean:
	rm -rf $(OBJDIR) $(NAME)

re: fclean all
