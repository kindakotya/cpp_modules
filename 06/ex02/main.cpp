/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 05:47:44 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/10 06:48:55 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Identify.hpp"

int	main(){
	for (int i = 0;i < 20;i++)
	{
		std::cout << "Test no." << i << std::endl;
		Base*	obj = Identify::generate();
		Identify::identify(obj);
		Identify::identify(*obj);
		std::cout << std::endl;
	}
	return 0;
}
