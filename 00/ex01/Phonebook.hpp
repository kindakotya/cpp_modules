/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:47:39 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/10 23:49:57 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>

class Contact
{
public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	u_int32_t	phone_number;
	std::string	darkest_secret;
};

class PhoneBook
{
private:
	Contact	contacts[8];
public:
	PhoneBook();
	~PhoneBook();

	void	open();
	void	add();
	void	search();
};

#endif