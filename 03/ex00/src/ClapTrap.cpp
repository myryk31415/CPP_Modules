/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 23:37:52 by padam             #+#    #+#             */
/*   Updated: 2024/06/14 15:50:24 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = "ClapTrap";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Name constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	return ;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

// Assignment operator overload
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	return (*this);
}

// Destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->_name;
	if (!this->_energy_points)
	{
		std::cout << " has no ernergy left!" << std::endl;
		return;
	}
	if (!this->_hit_points)
	{
		std::cout << " is already dead!" << std::endl;
		return;
	}
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name;
	if (!this->_energy_points)
	{
		std::cout << " has no ernergy left!" << std::endl;
		return;
	}
	if (!this->_hit_points)
	{
		std::cout << " is already dead!" << std::endl;
		return;
	}
	std::cout << " is repaired by " << amount << " points" << std::endl;
	this->_hit_points += amount;
	this->_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name;
	if (amount >= this->_hit_points)
	{
		std::cout << " dies" << std::endl;
		this->_hit_points = 0;
	}
	std::cout  << " takes " << amount << " points of damage" << std::endl;
	this->_hit_points -= amount;
}
