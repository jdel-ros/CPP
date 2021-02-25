/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:44:28 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/02/25 15:44:05 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( void )
{
}

Pony::~Pony( void )
{
}

int	Pony::setHeight( std::string str)
{
	if (std::regex_match(str, std::regex(REG_INCH)) == 0)
	{
		std::cout << "The height of the Pony have to be in inch" << std::endl;
		return (0);
	}
	else
		this->_height = str;
	return (1);
}

int	Pony::setWeight( std::string str)
{
	if (std::regex_match(str, std::regex(REG_GRAM)) == 0)
	{
		std::cout << "The weight of the Pony have to be in g/kg" << std::endl;
		return (0);
	}
	else
		this->_weight = str;
	return (1);
}

int	Pony::setAge( std::string str)
{
	if (std::regex_match(str, std::regex(REG_AGE)) == 0)
	{
		std::cout << "The weight of the Pony have to be a number" << std::endl;
		return (0);
	}
	else
		this->_age = str;
	return (1);
}

int	Pony::setSpeed( std::string str)
{
	if (std::regex_match(str, std::regex(REG_KMH)) == 0)
	{
		std::cout << "The weight of the Pony have to be in km/h" << std::endl;
		return (0);
	}
	else
		this->_speed = str;
	return (1);
}

void	Pony::put_age(std::string age)
{
	setAge(age);
}


void	Pony::put_height(std::string height)
{
	setHeight(height);
}

void	Pony::put_weight(std::string weight)
{
	setWeight(weight);
}

void	Pony::put_speed(std::string speed)
{
	setSpeed(speed);
}

void	Pony::print_info(std::string info)
{
	if (info.compare("height") == 0)
		std::cout << "The height of your pony is : " << Pony::getHeight() << std::endl;
	else if (info.compare("weight") == 0)
		std::cout << "The weight of your pony is : " << Pony::getWeight() << std::endl;
	else if (info.compare("speed") == 0)
		std::cout << "The speed of your pony is : " << Pony::getSpeed() << std::endl;
	else if (info.compare("age") == 0)
		std::cout << "The age of your pony is : " << Pony::getAge() << std::endl;
	else
		std::cout << "Wrong info" << std::endl;
}

void	Pony::pony_eat(std::string meal)
{
	if (meal.compare("pasta") == 0)
		put_weight("95kg");
	else if (meal.compare("vegetables") == 0)
		put_weight("91kg");
	else if (meal[0] == '\0')
		put_weight("88kg");
	std::cout << "The weight of your pony is : " << Pony::getWeight() << std::endl;
}