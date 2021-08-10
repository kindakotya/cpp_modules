/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:24:14 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/10 19:02:52 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	++argv;
	while (*argv) {
		while (**argv){
			std::cout << (unsigned char)toupper(**argv);
			++(*argv);
		}
		++argv;
	}
	std::cout << std::endl;
	return (0);
}