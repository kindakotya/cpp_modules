/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 00:54:38 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/19 01:59:08 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <sstream>

std::string		Replace::_file_content;
std::ifstream	Replace::_fin;
std::ofstream	Replace::_fout;

void	Replace::write_content(std::string s1, std::string s2)
{
	std::stringstream	strStr;
	strStr << _fin.rdbuf();
	_file_content = strStr.str();
	if (_file_content.empty())
		return ;
	for (size_t pos = 0; s1 != s2 && pos <= _file_content.size() - s1.size(); pos++){
		if (!_file_content.compare(pos, s1.size(), s1)){
			_file_content.erase(pos, s1.size());
			_file_content.insert(pos, s2);
			pos += s2.size() - 1;
		}
	}
	_fout << _file_content;
}

int	Replace::replace(std::string filename, std::string s1, std::string s2)
{
	if (s1.empty() || s2.empty()){
		std::cerr << "Error: Nice try, maslyonok. STRING MUST BE NOT EMPTY." << std::endl;
		return 1;
	}
	_fin.open(filename, std::ios_base::in);
	if (!_fin.is_open()){
		std::cerr << "Error: Can't open \"" << filename << "\"." << std::endl;
		return 1;
	}
	_fout.open(filename + ".replace", std::ios_base::trunc);
	if (!_fout.is_open()){
		std::cerr << "Error: Can't open \"" << filename << ".replace\"." << std::endl;
		return 1;
	}
	write_content(s1, s2);
	_fin.close();
	_fout.close();
	return 0;
}
