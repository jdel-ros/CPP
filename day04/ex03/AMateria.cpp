/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:26:41 by juan              #+#    #+#             */
/*   Updated: 2021/03/12 10:40:40 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const & type ): _type(type), _xp(0)
{

}

AMateria::AMateria( AMateria const & src )
{
	*this = src;
}

AMateria & AMateria::operator=( AMateria const & rhs )
{
	this->_type = rhs._type;
	this->_xp = rhs._xp;
	return *this;
}

AMateria::~AMateria( void )
{

}

void	AMateria::use( ICharacter & target )
{
	_xp += 10;
}