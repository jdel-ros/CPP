/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:03:04 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/09 09:14:20 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA( void )
{	
}

void		HumanA::attack( void )
{
	std::cout << HumanA::getName() << " attacks with his " << this->_weapon.getType() << std::endl;
}
