/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 04:00:29 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/04 20:50:03 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	_type;
	AMateria(){}
public:
	AMateria(std::string const & type);
	virtual ~AMateria();

	std::string const &	getType() const; //Returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target) = 0;
};


#endif
