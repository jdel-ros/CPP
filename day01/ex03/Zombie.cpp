/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:25:55 by juan              #+#    #+#             */
/*   Updated: 2021/03/02 12:21:26 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie( void )
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Is m*therf*cking dead, CHECH !" << std::endl;
}

void	Zombie::advert() const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinssss..." << std::endl;
}