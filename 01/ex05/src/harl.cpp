/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 02:02:29 by padam             #+#    #+#             */
/*   Updated: 2024/05/06 13:22:54 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void	Harl::debug(void)
{
	std::cout << "well well well look at this" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "yep maybe i should tell you" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "if I was you I wouldnt do that" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "sucks to be you" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return;
		}
	}
}
