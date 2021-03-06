/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 12:38:04 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/07 14:09:37 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


class Fixed {

public:

	Fixed();
	Fixed(Fixed const& src);
	Fixed&	operator=(Fixed const& rhs);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(int const raw);

private:

	int					_value;
	static int const	_nb_fractional_bits;

};
