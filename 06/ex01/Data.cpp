/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:42:58 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/09 19:57:35 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr){
	ptr->str = "42";
	ptr->n = 42;
	ptr->c = 42;
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}
