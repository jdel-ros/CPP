/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:25:55 by juan              #+#    #+#             */
/*   Updated: 2021/03/09 08:55:42 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	this->announce();
}

Zombie::~Zombie( void )
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Is m*therf*cking dead, CHEH !" << std::endl;
}

void	Zombie::announce() const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinssss..." << std::endl;
}
