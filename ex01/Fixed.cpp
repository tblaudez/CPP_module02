/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 12:40:32 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/23 13:44:23 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int const	Fixed::_nb_fractional_bits = 8;

// Default constructor
Fixed::Fixed(void) : _value(0) {

	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(int const value) {

	std::cout << "Integer constructor called" << std::endl;
	this->_value = value * (1 << this->_nb_fractional_bits);
}


Fixed::Fixed(float const value) {

	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_nb_fractional_bits));
}

// Copy constructor using operator= overload
Fixed::Fixed(Fixed const& src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

// Destructor
Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

// Operator= overload
Fixed&	Fixed::operator=(Fixed const& rhs) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_value = rhs._value;
	}

	return *this;
}

// Operator<< overload
std::ostream&	operator<<(std::ostream& o, Fixed const& i) {

	std::cout << i.toFloat();
	return o;
}


int		Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}


void	Fixed::setRawBits(int const raw) {

	std::cout << "setRaeBits member function called" << std::endl;
	this->_value = raw;
}


int		Fixed::toInt(void) const {

	return this->_value / (1 << this->_nb_fractional_bits);
}


float	Fixed::toFloat(void) const {

	return static_cast<float>(this->_value) / (1 << this->_nb_fractional_bits);
}
