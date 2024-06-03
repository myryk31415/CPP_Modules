/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 02:02:29 by padam             #+#    #+#             */
/*   Updated: 2024/05/31 15:46:34 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = value << Fixed::_fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(value * (1 << Fixed::_fractionalBits));
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::operator>(const Fixed &rhs)
{
	return (this->_fixedPointValue > rhs._fixedPointValue);
}

int Fixed::operator<(const Fixed &rhs)
{
	return (this->_fixedPointValue < rhs._fixedPointValue);
}

int Fixed::operator>=(const Fixed &rhs)
{
	return (this->_fixedPointValue >= rhs._fixedPointValue);
}

int Fixed::operator<=(const Fixed &rhs)
{
	return (this->_fixedPointValue <= rhs._fixedPointValue);
}

int Fixed::operator==(const Fixed &rhs)
{
	return (this->_fixedPointValue == rhs._fixedPointValue);
}

int Fixed::operator!=(const Fixed &rhs)
{
	return (this->_fixedPointValue != rhs._fixedPointValue);
}

Fixed Fixed::operator+(const Fixed &rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed &rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed &rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed &rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed Fixed::operator++(void)
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator--(void)
{
	this->_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue--;
	return (tmp);
}

int		Fixed::getRawBits(void) const
{
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue / (1 << Fixed::_fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> Fixed::_fractionalBits);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed&	Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed&	Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

std::ostream& operator<<(std::ostream &o, Fixed const &ref)
{
	o << ref.toFloat();
	return (o);
}

