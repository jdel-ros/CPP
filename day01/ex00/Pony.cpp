/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:44:28 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/02/26 12:10:25 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( std::string name, std::string age, std::string speed, int weight ) : _name(name), _weight(weight), _age(age), _speed(speed)
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

void Pony::setAge( std::string str)
{
	this->_age = str;
}

void Pony::setSpeed( std::string str)
{
	this->_speed = str;
}

void	Pony::print_info(std::string info)
{
	if (info.compare("name") == 0)
		std::cout << "The name of your pony is : " << Pony::getName() << std::endl;
	else if (info.compare("weight") == 0)
		std::cout << "The weight of " << Pony::getName() << " is : " << Pony::getWeight() << "kg" << std::endl;
	else if (info.compare("speed") == 0)
		std::cout << "The speed of " << Pony::getName() << " is : " << Pony::getSpeed() << std::endl;
	else if (info.compare("age") == 0)
		std::cout << "The age of " << Pony::getName() << " is : " << Pony::getAge() << std::endl;
	else
		std::cout << "Wrong info" << std::endl;
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
