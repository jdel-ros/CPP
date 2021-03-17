/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:44:27 by juan              #+#    #+#             */
/*   Updated: 2021/03/09 08:41:42 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

std::string ZombieEvent::_names_rand[5] =
{
	"Michmich",
	"Dider",
	"JeanEud",
	"Jacques",
	"Aristote",
};

ZombieEvent::ZombieEvent( void )
{
	srand(time(NULL));
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
