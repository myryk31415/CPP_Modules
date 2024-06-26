/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 23:49:30 by padam             #+#    #+#             */
/*   Updated: 2024/06/14 16:19:33 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


// Default constructor

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->_name = "default";
	FragTrap::_hit_points = 100;
	ScavTrap::_energy_points = 50;
	FragTrap::_attack_damage = 30;
	return ;
}

// Name constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "Name DiamondTrap constructor called" << std::endl;
	this->_name = name;
	FragTrap::_hit_points = 100;
	ScavTrap::_energy_points = 50;
	FragTrap::_attack_damage = 30;
	return ;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = other;
	return ;
}

// Assignment operator overload
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	this->_name = other._name;
	this->ClapTrap::_name = other.ClapTrap::_name;
	FragTrap::_hit_points = other.FragTrap::_hit_points;
	ScavTrap::_energy_points = other.ScavTrap::_energy_points;
	FragTrap::_attack_damage = other.FragTrap::_attack_damage;
	return (*this);
}

// Destructor
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
