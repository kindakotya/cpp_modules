/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 20:08:21 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/10 20:16:56 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T& a, T& b){
	T c = a;
	a = b;
	b = c;
}

template<typename T>
T	min(T const & a, T const & b){
	return a < b ? a : b;
}

template<typename T>
T	max(T const & a, T const & b){
	return a > b ? a : b;
}



#endif
