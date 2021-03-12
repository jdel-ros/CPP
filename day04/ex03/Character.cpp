/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 11:12:07 by juan              #+#    #+#             */
/*   Updated: 2021/03/12 11:19:12 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string name ): _name(name)
{

}

Character::~Character( void )
{

}

Character::Character( Character const & src )
{
	*this = src;
}

Character & Character::operator=( Character const & rhs )
{
	this->_name = rhs._name;
	return *this;
}

void	Character::equip( AMateria * materia )
{
	
}