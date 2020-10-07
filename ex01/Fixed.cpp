/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 12:40:32 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 14:28:25 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream> // cout
#include <cmath> // roundf


Fixed::Fixed() : _value(0) {

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


Fixed::Fixed(Fixed const& src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


Fixed&	Fixed::operator=(Fixed const& rhs) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_value = rhs._value;
	}

	return *this;
}


Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}


std::ostream&	operator<<(std::ostream& o, Fixed const& i) {

	o << i.toFloat();
	return o;
}


int		Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}


void	Fixed::setRawBits(int const raw) {

	std::cout << "setRaeBits member function called" << std::endl;
	this->_value = raw;
}


int		Fixed::toInt() const {

	return this->_value / (1 << this->_nb_fractional_bits);
}


float	Fixed::toFloat() const {

	return static_cast<float>(this->_value) / (1 << this->_nb_fractional_bits);
}


int const	Fixed::_nb_fractional_bits = 8;
