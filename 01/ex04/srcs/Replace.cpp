/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 00:54:38 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/18 03:33:26 by gmayweat         ###   ########.fr       */
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
	for (size_t pos = 0; pos <= _file_content.size() - s1.size(); pos++){
		if (_file_content.rfind(s1, pos) != std::string::npos){
			_file_content.erase(pos, s1.size());
			_file_content.insert(pos, s2);
			pos += s1.size() - 1;
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
		std::cerr << "Can't open " << filename << " file." << std::endl;
		return 1;
	}
	_fout.open(filename + ".replace", std::ios_base::trunc);
	if (!_fout.is_open()){
		std::cerr << "Can't open " << filename << ".replace file." << std::endl;
		return 1;
	}
	write_content(s1, s2);
	_fin.close();
	_fout.close();
	return 0;
}
