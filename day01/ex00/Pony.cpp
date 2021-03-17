/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:44:28 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/09 07:58:50 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( std::string name, int weight ) : _name(name), _weight(weight)
{
	std::cout << "Poney " << this->_name << " is born" << std::endl;
}

Pony::~Pony( void )
{
	std::cout << "Poney " << this->_name << " died" << std::endl;
}

void	Pony::setName( std::string str)
{
	this->_name = str;
}

void	Pony::setWeight( int i )
{
	this->_weight = this->_weight + i;
}

void	Pony::printPoney( void )
{
	std::cout << "The weight of " << Pony::getName() << " is : " << Pony::getWeight() << "kg" << std::endl;
}

void	Pony::pony_eat(std::string meal)
{
	if (meal.compare("pasta") == 0)
		setWeight(5);
	else if (meal.compare("vegetables") == 0)
		setWeight(2);
	else if (meal[0] == '\0')
		setWeight(-2);
	std::cout << "The weight of " << Pony::getName() << " is : " << Pony::getWeight() << "kg" << std::endl;
}
