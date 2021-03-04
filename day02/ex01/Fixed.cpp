/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:06:13 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/04 13:07:52 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_FractionalBits = 8;

Fixed::Fixed( void ) : _RawBits( 0 )
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( int const RawBits )
{
	std::cout << "Int constructor called" << std::endl;
	this->_RawBits = RawBits << Fixed::_FractionalBits;
}

Fixed::Fixed( float const RawBits )
{
	std::cout << "Float constructor called" << std::endl;
	this->_RawBits = (int)roundf(RawBits * ( 1 << Fixed::_FractionalBits));
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &		Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_RawBits = rhs.getRawBits();
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}

int		Fixed::toInt( void ) const
{
	return _RawBits >> Fixed::_FractionalBits;
}

float		Fixed::toFloat( void ) const
{
	return this->_RawBits / (float)(1 << Fixed::_FractionalBits);
}

int			Fixed::getRawBits( void ) const
{
	return this->_RawBits;
}

void			Fixed::setRawBits( int const RawBits )
{
	this->_RawBits = RawBits;
}
