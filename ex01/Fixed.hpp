/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 12:38:04 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/23 13:14:38 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Fixed {

public:

	Fixed(void);
	Fixed(Fixed const& src);
	Fixed(int const value);
	Fixed(float const value);
	~Fixed(void);

	Fixed&	operator=(Fixed const& rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	int		toInt(void) const;
	float	toFloat(void) const;

private:

	int					_value;
	static int const	_nb_fractional_bits;
};


std::ostream&	operator<<(std::ostream& o, Fixed const& i);