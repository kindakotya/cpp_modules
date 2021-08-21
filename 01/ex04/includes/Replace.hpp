/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 00:50:01 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/19 16:17:58 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <fstream>
# include <iostream>

class Replace
{
private:
	static std::string		_file_content;
	static std::ifstream	_fin;
	static std::ofstream	_fout;
	static void	write_content(std::string s1, std::string s2);
public:
	static int	replace(std::string filename, std::string s1, std::string s2);
};

#endif
