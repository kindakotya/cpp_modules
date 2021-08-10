/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:47:39 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/11 01:22:39 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact		contacts[8];
	u_int8_t	next_number;
	u_int8_t	nu_of_contacts;

	void		add();
	void		search();
public:
	PhoneBook();
	// ~PhoneBook();

	void	open();
};

#endif