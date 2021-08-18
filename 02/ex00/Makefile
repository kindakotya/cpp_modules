# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/25 22:40:29 by gmayweat          #+#    #+#              #
#    Updated: 2021/08/19 02:21:45 by gmayweat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_first_orthodox_class

SRCS =					main.cpp \
						Fixed.cpp

HEAD =					Fixed.hpp

OBJS = $(SRCS:.cpp=.o)

OBJDIR = objs

OBJSPATH = $(addprefix $(OBJDIR)/, $(OBJS))

FLAGS = -Wall -Wextra -Werror -I. -std=c++98 -pedantic

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
