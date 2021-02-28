/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:25:55 by juan              #+#    #+#             */
/*   Updated: 2021/02/27 11:19:40 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	this->advert();
}

Zombie::~Zombie( void )
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Is m*therf*cking dead, CHECH !" << std::endl;
}

void	Zombie::advert() const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinssss..." << std::endl;
}