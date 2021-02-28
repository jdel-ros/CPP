/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:25:55 by juan              #+#    #+#             */
/*   Updated: 2021/02/27 12:05:57 by juan             ###   ########lyon.fr   */
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