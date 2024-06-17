#include "Character.hpp"

// Default constructor
Character::Character(void) : _name("default")
{
	std::cout << "Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slot_status[i] = false;
	return ;
}

// Name constructor
Character::Character(std::string const & name) : _name(name)
{
	std::cout << "Name constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slot_status[i] = false;
	return ;
}

// Copy constructor
Character::Character(const Character &other)
{
	std::cout << "Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other._slot_status[i])
			this->_materia[i] = other._materia[i]->clone();
		this->_slot_status[i] = other._slot_status[i];
	}
	return ;
}

// Assignment operator overload
Character &Character::operator=(const Character &other)
{
	std::cout << "Assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot_status[i])
			delete this->_materia[i];
		if (other._slot_status[i])
			this->_materia[i] = other._materia[i]->clone();
		this->_slot_status[i] = other._slot_status[i];
	}
	return (*this);
}

// Destructor
Character::~Character(void)
{
	std::cout << "Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot_status[i])
			delete this->_materia[i];
	}
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
		if (!this->_slot_status[i])
		{
			this->_materia[i] = m;
			this->_slot_status[i] = true;
			break ;
		}
	}
	return ;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !this->_slot_status[idx])
		return ;
	this->_materia[idx] = 0;
	this->_slot_status[idx] = false;
	return ;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || !this->_slot_status[idx])
		return ;
	this->_materia[idx]->use(target);
	return ;
}
