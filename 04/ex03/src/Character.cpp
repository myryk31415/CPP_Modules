#include "Character.hpp"

// Default constructor
Character::Character(void) : _name("default")
{
	std::cout << "Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = 0;
	return ;
}

// Name constructor
Character::Character(std::string const & name) : _name(name)
{
	std::cout << "Name constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = 0;
	return ;
}

// Copy constructor
Character::Character(const Character &other)
{
	std::cout << "Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other._materia[i])
			this->_materia[i] = other._materia[i]->clone();
		else
			this->_materia[i] = 0;
	}
	return ;
}

// Assignment operator overload
Character &Character::operator=(const Character &other)
{
	std::cout << "Assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_materia[i];
		if (other._materia[i])
			this->_materia[i] = other._materia[i]->clone();
		else
			this->_materia[i] = 0;
	}
	return (*this);
}

// Destructor
Character::~Character(void)
{
	std::cout << "Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_materia[i];
	return ;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = m;
			break ;
		}
	}
	return ;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	this->_materia[idx] = 0;
	return ;
}

void Character::use(int idx, ICharacter &target)
{
	std::cout << "* " << this->_name << " uses ";
	if (idx < 0 || idx >= 4 || !this->_materia[idx])
		return ;
	this->_materia[idx]->use(target);
	return ;
}
