/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 02:02:29 by padam             #+#    #+#             */
/*   Updated: 2024/05/06 23:17:50 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG] " << std::endl;
	std::cout << "well well well look at this" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO] " << std::endl;
	std::cout << "yep maybe i should tell you" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] " << std::endl;
	std::cout << "if I was you I wouldnt do that" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR] " << std::endl;
	std::cout << "sucks to be you" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++ ;
	switch (i)
	{
	case	0:
		this->debug();
		__attribute__ ((fallthrough));
	case	1:
		this->info();
		__attribute__ ((fallthrough));
	case	2:
		this->warning();
		__attribute__ ((fallthrough));
	case	3:
		this->error();
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
