/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 00:36:39 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/11 18:36:45 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::fields[5]= {
								"first name",
								"last name",
								"nickname",
								"phone number",
								"darkest secret"};

Contact::Contact()
{
	for (u_int16_t i = FIRST_NAME; i < DARKEST_SECRET; i++)
		this->infos[i] = std::string();
}

void	Contact::print(u_int16_t index, u_int16_t fields_to_print)
{
		std::cout << '|' << std::setw(10) << index + 1;
		for (u_int16_t j = Contact::FIRST_NAME; j <= fields_to_print; j++){
			if (infos[j].size() > 10)
				std::cout << '|' << std::setw(10) << infos[j].substr(0, 8) + '.';
			else
				std::cout << '|' << std::setw(10) << infos[j];
		}
		std::cout << '|' << std::endl;
}