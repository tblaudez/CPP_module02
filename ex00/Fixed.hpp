/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 12:38:04 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/09/23 13:15:19 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Fixed {

public:

	Fixed(void);
	Fixed(Fixed const& src);
	~Fixed(void);

	Fixed&	operator=(Fixed const& rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int					_value;
	static int const	_nb_fractional_bits;
};