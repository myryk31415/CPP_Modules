/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 01:56:01 by padam             #+#    #+#             */
/*   Updated: 2024/05/06 01:57:25 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

sed::sed(std::string in_file) : _in_file(in_file)
{
	_out_file = in_file + ".replace";
}


void	sed::replace(std::string s1, std::string s2)
{
	std::ifstream
