/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:28:18 by juan              #+#    #+#             */
/*   Updated: 2021/02/27 11:38:35 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int n ) : _nbZombies(n)
{
	this->_Zombies = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		_Zombies[i].setType(ZombieHorde::_types[std::rand() % 3]);
		_Zombies[i].setName(ZombieHorde::_names[std::rand() % 5]);
	}
}

ZombieHorde::~ZombieHorde( void )
{
	delete [] this->_Zombies;
}

std::string ZombieHorde::_types[3] = {
	"Human",
	"Dwarf",
	"Elf",
};

std::string ZombieHorde::_names[5] = {
	"Michmich",
	"DiderDesch",
	"JeanEudd",
	"EasyMamene",
	"SalutToi<3",
};

void		ZombieHorde::annonce( void ) const
{
	for (int i = 0; i < this->_nbZombies; i++)
		_Zombies[i].advert();
}
