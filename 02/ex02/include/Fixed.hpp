/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42heilbronn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 01:25:36 by padam             #+#    #+#             */
/*   Updated: 2024/06/18 11:43:11 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &src);
		Fixed&	operator = (const Fixed &rhs);
		~Fixed(void);

		int operator > (const Fixed &rhs);
		int operator < (const Fixed &rhs);
		int operator >= (const Fixed &rhs);
		int operator <= (const Fixed &rhs);
		int operator == (const Fixed &rhs);
		int operator != (const Fixed &rhs);
		Fixed operator + (const Fixed &rhs);
		Fixed operator - (const Fixed &rhs);
		Fixed operator * (const Fixed &rhs);
		Fixed operator / (const Fixed &rhs);
		Fixed operator ++ (void);
		Fixed operator -- (void);
		Fixed operator ++ (int);
		Fixed operator -- (int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed&	min(Fixed &a, Fixed &b);
		static const Fixed&	min(Fixed const &a, Fixed const &b);
		static Fixed&	max(Fixed &a, Fixed &b);
		static const Fixed&	max(Fixed const &a, Fixed const &b);
};

std::ostream& operator << (std::ostream &o, Fixed const &ref);
#endif
