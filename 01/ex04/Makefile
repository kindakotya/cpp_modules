# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/25 22:40:29 by gmayweat          #+#    #+#              #
#    Updated: 2021/08/18 01:01:49 by gmayweat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS =					main.cpp \
						Replace.cpp

HEAD =					Replace.hpp

OBJS = $(SRCS:.cpp=.o)

OBJDIR = objs

OBJSPATH = $(addprefix $(OBJDIR)/, $(OBJS))

FLAGS = -Wall -Wextra -Werror -I./includes -std=c++98 -pedantic -g

vpath %.o objs
vpath %.cpp srcs
vpath %.hpp includes

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
