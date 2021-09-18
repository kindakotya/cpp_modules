/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:08:32 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 05:27:56 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string	_type;
	Animal();
	Animal(Animal const &obj);
	Animal&	operator=(Animal const &obj);
public:
	virtual ~Animal();

	std::string	getType() const;
	virtual void	makeSound() const = 0;
};


#endif
