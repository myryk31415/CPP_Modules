#include "MateriaSource.hpp"

// Default constructor
MateriaSource::MateriaSource(void)
{
	std::cout << "Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slot_status[i] = true;
	return ;
}

// Copy constructor
MateriaSource::MateriaSource(const MateriaSource &other)
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
MateriaSource &MateriaSource::operator=(const MateriaSource &other)
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
MateriaSource::~MateriaSource(void)
{
	std::cout << "Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot_status[i])
			delete this->_materia[i];
	}
	return ;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_slot_status[i])
		{
			this->_materia[i] = m->clone();
			this->_slot_status[i] = false;
			break ;
		}
	}
	return ;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slot_status[i] && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (0);
}
