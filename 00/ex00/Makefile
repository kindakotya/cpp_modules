# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/10 19:33:13 by gmayweat          #+#    #+#              #
#    Updated: 2021/08/10 19:42:31 by gmayweat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

all: $(NAME)

$(NAME): $(NAME).cpp
	clang++ -Wall -Werror -Wextra -std=c++98 -o $(NAME) $(NAME).cpp

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all