/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 01:25:36 by padam             #+#    #+#             */
/*   Updated: 2024/05/06 12:55:51 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>
using namespace std;

class	Sed
{
	private:
		string	_in_file;
		string	_out_file;
	public:
		Sed(string in_file);
		void	replace(string s1, string s2);
};

#endif
