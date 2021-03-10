/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Barman.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:20:27 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/10 14:26:11 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Barman.hpp"

Barman::Barman( void ): Enemy(130, "Barman")
{
	std::cout << "Let's gooooo drink bby !" << std::endl;
}

Barman::~Barman( void )
{
	std::cout << "* End of service * Everybody out !!" << std::endl;
}

void	Barman::takeDamage( int d )
{
	if (d >= 0)
		this->_hp -= d;
}

void	Barman::setHP( int i )
{
	_hp -= i;
}
