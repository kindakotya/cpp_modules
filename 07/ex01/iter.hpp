/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 20:21:20 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/11 05:32:20 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <string>

template<typename T>
void	iter(T* arr, size_t len, void (*fun)(T const & elem)){
	if (!arr || !fun || !len)
		return ;
	for (size_t i = 0; i < len; i++)
		fun(arr[i]);
}


#endif
