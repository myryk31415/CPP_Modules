/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 22:51:23 by padam             #+#    #+#             */
/*   Updated: 2024/05/22 16:26:08 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(float x, float y) : _x(x), _y(y)
{
	std::cout << "Float constructor called" << std::endl;
}

Point::Point(const Point &src) : _x(src._x), _y(src._y)
{
	std::cout << "Copy constructor called" << std::endl;
}

Point&	Point::operator=(const Point &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_x = rhs._x;
		this->_y = rhs._y;
	}
	return (*this);
}

Point::~Point(void)
{
	std::cout << "Destructor called" << std::endl;
}
