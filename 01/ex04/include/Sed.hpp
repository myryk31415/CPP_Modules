/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 01:25:36 by padam             #+#    #+#             */
/*   Updated: 2024/05/07 17:02:25 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>

class	Sed
{
	private:
		std::string	_in_file;
		std::string	_out_file;
	public:
		Sed(std::string in_file);
		void	replace(std::string s1, std::string s2);
};

#endif
