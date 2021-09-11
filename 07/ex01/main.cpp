/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 20:28:36 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/11 05:32:57 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <cmath>

static void	toupper_c(char const & c){std::cout << static_cast<char>(toupper(c)) << std::endl;}
static void	abs_f(float const & c){std::cout << fabs(c) << std::endl;}

int main(){
	char		arr_s[3] = {'l', 'O', 'l'};
	float		arr_f[2] = {-1.5, 2.1};
	
	std::cout << "char		arr_s[3] = {'l', 'O', 'l'} -> " << arr_s << std::endl;
	std::cout << "float		arr_f[2] = {-1.5, 2.1} -> " << arr_f[0] << ", " << arr_f[1] << std::endl;
	std::cout << "iter(arr_f, 2, abs_f) ->" << std::endl;
	iter(arr_f, 2, abs_f);
	std::cout << "iter(arr_s, 3, toupper_c) ->" << std::endl;
	iter(arr_s, 3, toupper_c);
	return 0;
}
