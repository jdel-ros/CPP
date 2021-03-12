/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:20:09 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/11 12:09:36 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void ): _count(0)
{

}

Squad::~Squad( void )
{

}

Squad::Squad( Squad const & src )
{
	*this = src;
}

Squad & Squad::operator=( Squad const & rhs)
{
	this->_unit = rhs._unit;
	this->_count = rhs._count;
	return *this;
}

int		Squad::getCount( void ) const
{
	return this->_count;
}

ISpaceMarine *	Squad::getUnit( int N ) const
{
	return &this->_unit[N];
}

int		Squad::push( ISpaceMarine *unit )
{
	
}
