/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 10:59:30 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/02 14:27:51 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{

public:

	Fixed( void );
	Fixed( int const RawBits );
	Fixed( float const RawBits );
	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed & operator=( Fixed const & rhs );

	int getRawBits( void ) const;
	void setRawBits( int const RawBits );
	float toFloat( void ) const;
	int toInt( void ) const;

private:

	int					_RawBits;
	static const int	_FractionalBits;

};

std::ostream & 		operator<<( std::ostream & o, Fixed const & i);

#endif
