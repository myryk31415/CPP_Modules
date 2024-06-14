/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:16:41 by padam             #+#    #+#             */
/*   Updated: 2024/06/14 16:11:33 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return ;

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Name ScavTrap constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << this->_name;
	if (!this->_energy_points)
	{
		std::cout << " has no ernergy left!" << std::endl;
		return;
	}
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in gaslight, gatekeep, girlboss mode" << std::endl;
}
