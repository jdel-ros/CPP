/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:44:27 by juan              #+#    #+#             */
/*   Updated: 2021/02/27 11:18:04 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

std::string ZombieEvent::_names_rand[5] = {
	"Michmich",
	"DiderDesch",
	"JeanEudd",
	"EasyMamene",
	"SalutToi<3",
};

ZombieEvent::ZombieEvent( void )
{
}

ZombieEvent::~ZombieEvent( void )
{
}

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie*		ZombieEvent::newZombie(std::string name) const
{
	return new Zombie(name, this->_type);
}

void	ZombieEvent::randomChump()
{
	Zombie z = Zombie(ZombieEvent::_names_rand[std::rand() % 5], this->_type);
}
