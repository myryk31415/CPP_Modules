/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 01:25:36 by padam             #+#    #+#             */
/*   Updated: 2024/05/06 01:57:19 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>

class	sed
{
	private:
		std::string	_in_file;
		std::string	_out_file;
	public:
		sed(std::string in_file);
		void	replace(std::string s1, std::string s2);
};

#endif
