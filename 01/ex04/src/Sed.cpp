/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 01:56:01 by padam             #+#    #+#             */
/*   Updated: 2024/05/06 13:06:31 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(string in_file) : _in_file(in_file)
{
	_out_file = in_file + ".replace";
}


void	Sed::replace(string s1, string s2)
{
	string	line;
	ifstream	ifs(_in_file.c_str());
	if (!ifs.is_open()) {
		cerr << "Error opening the file!" << endl;
		return;
	}
	ofstream ofs(_out_file.c_str());
	if (!ofs.is_open()) {
		cerr << "Error creating the output file!" << endl;
		ofs.close();
		return;
	}
	while (getline(ifs, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		ofs << line << endl;
	}
	ifs.close();
	ofs.close();
}
