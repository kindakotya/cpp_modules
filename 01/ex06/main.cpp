/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 03:40:38 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/18 19:14:17 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	Karen karen;
	if (ac == 2)
	{
		karen.complain(av[1]);
	}
	else
	{
		karen.complain();
	}
	return 0;
}
