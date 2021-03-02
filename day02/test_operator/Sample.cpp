/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 09:24:11 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/02 10:06:29 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

Sample::Sample( void ) : _n( 0 )
{
	std::cout << "Constructor Simple have been called" << std::endl;
}

Sample::Sample( int const n ) : _n( n )
{
	std::cout << "Constructor Int have been called" << std::endl; 
}

Sample::Sample( Sample const & src )
{
	std::cout << "Constructor Copy have been called" << std::endl;

	*this = src;
}

Sample::~Sample( void )
{
	std::cout << "Destructor have been called" << std::endl;
}

Sample &	Sample::operator=( Sample const & rhs)
{
	std::cout << "Assignement = have been called" << std::endl;
	this->_n = rhs.getN();
	return *this;
}

Sample 	Sample::operator+( Sample const & rhs) const
{
	std::cout << "Assignement + have been called" << std::endl;
	return Sample( this->_n + rhs.getN() );
}

std::ostream & 		operator<<( std::ostream & o, Sample const & i )
{
	o << "The valu of _n is : " << i.getN();
	return o;
}