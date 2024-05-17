/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:36:51 by padam             #+#    #+#             */
/*   Updated: 2024/05/17 20:22:16 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	hehe("hehe");
	ClapTrap	hihihih("hihihih");

	for (int i = 0; i < 12; i++)
	{
		hehe.attack("tatatarget");
	}
	hehe.beRepaired(21);
	hihihih.takeDamage(8);
	hihihih.beRepaired(4);
	hihihih.takeDamage(5);
	hihihih.takeDamage(5);
	return (0);
}
