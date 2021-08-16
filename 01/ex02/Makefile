# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/10 19:33:13 by gmayweat          #+#    #+#              #
#    Updated: 2021/08/16 21:21:14 by gmayweat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hi_this_is_brain

all: $(NAME)

$(NAME): main.cpp
	clang++ -Wall -Werror -Wextra -std=c++98 -o $(NAME) main.cpp

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all