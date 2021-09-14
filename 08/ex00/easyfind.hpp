/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 01:01:05 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/12 15:47:01 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <algorithm>

class CantFindException : public std::exception{
	public: const char*	what()const throw(){return "CantFindException (easyfind)";}
};

template<template <typename, typename> class T>
typename T<int, std::allocator<int> >::const_iterator	easyfind(T<int, std::allocator<int> > & cont, int n){
	typename T<int, std::allocator<int> >::iterator it = std::find(cont.begin(), cont.end(), n);
	if (it == cont.end())
		throw CantFindException();
	return it;
}

#endif
