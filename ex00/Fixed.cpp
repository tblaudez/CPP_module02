/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 12:40:32 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 14:27:58 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream> // cout


Fixed::Fixed() : _value(0) {

	std::cout << "Default constructor called" << std::endl;
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


int		Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}


void	Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}


int const	Fixed::_nb_fractional_bits = 8;
