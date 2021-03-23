/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 13:08:29 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/22 09:13:19 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( std::string name ) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5)
{
	std::cout << "The SuerTrap" << this->_name << " was correctly created !" << std::endl;
}

SuperTrap::SuperTrap( SuperTrap const & src ) : ClapTrap( src )
{
	std::cout << "Copy of SuperTrap was correclty created !" << std::endl;
	*this = src;
}

SuperTrap & SuperTrap::operator=( SuperTrap const & rhs )
{
	std::cout << "Assignement = have been called" << std::endl;
	this->_name = rhs._name;
	return *this;
}

SuperTrap::~SuperTrap( void )
{
	std::cout << "Damn ! " << this->_name << " dead body !" << std::endl;
}

void	SuperTrap::rangedAttack( std::string const & target )
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack( std::string const & target )
{
	NinjaTrap::meleeAttack(target);
}
