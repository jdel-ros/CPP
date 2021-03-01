/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:03:04 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/01 14:36:14 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name) : _name(name)
{
}

HumanB::~HumanB( void )
{	
}

void		HumanB::attack( void )
{
	std::cout << HumanB::getName() << " attacks with his " << this->_weapon->getType() << std::endl;
}
