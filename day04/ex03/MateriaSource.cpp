/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:07:34 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/31 08:55:59 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ): _count(0)
{

}

MateriaSource::~MateriaSource( void )
{

}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	*this = src;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs )
{
	int i = 0;
	if (this != &rhs)
	{
		this->_count = rhs._count;
		while (i <= _count)
		{
			this->_inventory[i] = rhs._inventory[i]->clone();
			i++;
		}
	}
	return *this;
}

void		MateriaSource::learnMateria( AMateria *materia )
{
	if (_count < 3)
	{
		_inventory[_count] = materia;
		_count++;
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	else
		return NULL;
}
