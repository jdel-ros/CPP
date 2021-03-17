/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:55:22 by juan              #+#    #+#             */
/*   Updated: 2021/03/09 09:10:22 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
}

Brain::~Brain( void )
{
}

void		Brain::setAge( int age )
{
	this->_age = age;
}

void		Brain::setNbneur( std::string nbNeur )
{
	this->_Nbneur = nbNeur;
}

void		Brain::setName( std::string str )
{
	this->_name = str; 
}

std::string Brain::identify( void ) const
{
	std::stringstream str;
	str << this;
	return str.str();
}

void	Brain::initvar( void )
{
	setAge(24);
	std::cout << "Your brain is : " << getAge() << " years old" << std::endl;
	setNbneur("90 billion");
	std::cout << "Your brain have : " << getNbneur() << " neurons" << std::endl;
	setName("Jdel-Brain");
	std::cout << "Your name brain is : " << getName() << std::endl;
}
