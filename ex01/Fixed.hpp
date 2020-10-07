/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 12:38:04 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 14:28:34 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <ostream> // duh..


class Fixed {

public:

	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const& src);
	Fixed&	operator=(Fixed const& rhs);
	~Fixed();

	int		getRawBits() const;

	void	setRawBits(int const raw);

	int		toInt() const;
	float	toFloat() const;

private:

	int					_value;
	static int const	_nb_fractional_bits;
};


std::ostream&	operator<<(std::ostream& o, Fixed const& i);
