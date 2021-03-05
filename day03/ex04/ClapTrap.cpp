/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:21:45 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/05 15:33:40 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "The Clap Default was correctly created !" << std::endl;
}

ClapTrap::ClapTrap( std::string name, int hitPoints, int maxHitPoints, int energyPoints, int maxEnergyPoints, int level, int meleeAttackDamage, int rangedAttackDamage, int armorDamageReduction ): _name(name), _hitPoints(hitPoints), _maxHitPoints(maxHitPoints), _energyPoints(energyPoints), _maxEnergyPoints(maxEnergyPoints), _level(level), _meleeAttackDamage(meleeAttackDamage), _rangedAttackDamage(rangedAttackDamage), _armorDamageReduction(armorDamageReduction)
{
	std::cout << "The Clap " << this->_name << " is created" << std::endl;
}

ClapTrap::ClapTrap(  ClapTrap const & src )
{
	std::cout << "The copy of Clap " << this->_name << " is created" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap ( void )
{
	std::cout << "The Clap " << this->_name << " was killed" << std::endl;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs)
{
	std::cout << "Assignement = have been called" << std::endl;
	this->_name = rhs._name;
	return *this;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	this->_hitPoints -= amount - _armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	if (this->_hitPoints > 0)
		std::cout << "Clap block 5 HP with his armor" << std::endl;
	std::cout << "Clap have " << _hitPoints << " HP !" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->_hitPoints += amount;
	if (this->_hitPoints > _maxHitPoints)
		this->_hitPoints = _maxHitPoints;
	std::cout << "Clap have " << _hitPoints << " HP !" << std::endl;
}

void	ClapTrap::rangedAttack( std::string const & target )
{
	std::cout << this->_name << " Clap attacks " << target << " at range, causing 20 points of damage !" << std::endl;
	takeDamage(20);
}

void	ClapTrap::meleeAttack( std::string const & target )
{
	std::cout << this->_name << " Clap attacks " << target << " at melee, causing 30 points of damage !" << std::endl;
	takeDamage(30);
}