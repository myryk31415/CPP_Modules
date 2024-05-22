/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 01:56:01 by padam             #+#    #+#             */
/*   Updated: 2024/05/22 15:26:17 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string in_file) : _in_file(in_file)
{
	_out_file = in_file + ".replace";
}


void	Sed::replace(std::string s1, std::string s2)
{
	std::string	line;
	std::ifstream	ifs(_in_file.c_str());
	if (!ifs.is_open()) {
		std::cerr << "Error opening the file!" << std::endl;
		return;
	}
	std::ofstream ofs(_out_file.c_str());
	if (!ofs.is_open()) {
		std::cerr << "Error creating the output file!" << std::endl;
		ofs.close();
		return;
	}
	while (getline(ifs, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
}
