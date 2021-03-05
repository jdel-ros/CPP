/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:34:29 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/05 13:06:23 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ): ClapTrap("Defaut", 60, 60, 120, 120, 1, 60, 5, 0)
{
	srand(time(NULL));
	std::cout << "The Ninja " << this->_name << " arrived on Namek !" << std::endl;
}

NinjaTrap::NinjaTrap( std::string name ): ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	srand(time(NULL));
	std::cout << "The Ninja " << this->_name << " arrived on Namek !" << std::endl;
}

NinjaTrap::NinjaTrap(  NinjaTrap const & src ): ClapTrap( src )
{
	std::cout << "The copy of Ninja " << this->_name << " arrived too on Namek !" << std::endl;
	*this = src;
}

NinjaTrap::~NinjaTrap ( void )
{
	std::cout << "The Ninja " << this->_name << " was killed !" << std::endl;
}

NinjaTrap &	NinjaTrap::operator=( NinjaTrap const & rhs)
{
	std::cout << "Assignement = have been called" << std::endl;
	this->_name = rhs._name;
	return *this;
}

void	NinjaTrap::takeDamage( unsigned int amount )
{
	this->_hitPoints -= amount - _armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	if (this->_hitPoints > 0)
		std::cout << "Ninja block 5 HP with his armor" << std::endl;
	std::cout << "Ninja have " << _hitPoints << " HP !" << std::endl;
}

void	NinjaTrap::beRepaired( unsigned int amount )
{
	this->_hitPoints += amount;
	if (this->_hitPoints > _maxHitPoints)
		this->_hitPoints = _maxHitPoints;
	std::cout << "Ninja have " << _hitPoints << " HP !" << std::endl;
}

void	NinjaTrap::rangedAttack( std::string const & target )
{
	std::cout << this->_name << " attacks " << target << " at range, causing 5 points of damage !" << std::endl;
	takeDamage(5);
}

void	NinjaTrap::meleeAttack( std::string const & target )
{
	std::cout << this->_name << " attacks " << target << " at melee, causing 60 points of damage !" << std::endl;
	takeDamage(60);
}

void	NinjaTrap::ninjaShoebox( NinjaTrap & NinjaTarget )
{
	std::cout << "MAKE SOME NOISE FOR NINJAAAAA " << NinjaTarget.getName() << " !!!" << std::endl;
}

void	NinjaTrap::ninjaShoebox( ClapTrap & NinjaTarget )
{
	std::cout << "MAKE SOME NOISE FOR ClAAAAAP " << NinjaTarget.getName() << " !!!" << std::endl;
}

void	NinjaTrap::ninjaShoebox( ScavTrap & NinjaTarget )
{
	std::cout << "MAKE SOME NOISE FOR SCAAAAAAV " << NinjaTarget.getName() << " !!!" << std::endl;
}

void	NinjaTrap::ninjaShoebox( FragTrap & NinjaTarget )
{
	std::cout << "MAKE SOME NOISE FOR FRAAAAAAG " << NinjaTarget.getName() << " !!!" << std::endl;
}
