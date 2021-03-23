/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:21:45 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/22 09:01:28 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name, int hitPoints, int maxHitPoints, int energyPoints, int maxEnergyPoints, int level, int meleeAttackDamage, int rangedAttackDamage, int armorDamageReduction ): _name(name), _hitPoints(hitPoints), _maxHitPoints(maxHitPoints), _energyPoints(energyPoints), _maxEnergyPoints(maxEnergyPoints), _level(level), _meleeAttackDamage(meleeAttackDamage), _rangedAttackDamage(rangedAttackDamage), _armorDamageReduction(armorDamageReduction)
{
	std::cout << "The Clap " << this->_name << " is created" << std::endl;
}

ClapTrap::ClapTrap(  ClapTrap const & src ): _name(src._name), _hitPoints(src._hitPoints), _maxHitPoints(src._maxHitPoints), _energyPoints(src._energyPoints), _maxEnergyPoints(src._maxEnergyPoints), _level(src._level), _meleeAttackDamage(src._meleeAttackDamage), _rangedAttackDamage(src._rangedAttackDamage), _armorDamageReduction(src._armorDamageReduction)
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
	this->_name = rhs._name;
	return *this;
}

std::string ClapTrap::getName( void )
{
	return this->_name;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	this->_hitPoints -= amount - _armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	if (this->_hitPoints > 0)
		std::cout << "Clap block " << _armorDamageReduction << " HP with his armor" << std::endl;
	std::cout << "Clap have " << _hitPoints << " HP !" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->_hitPoints += amount;
	if (this->_hitPoints > _maxHitPoints)
		this->_hitPoints = _maxHitPoints;
	std::cout << "Clap have " << _hitPoints << " HP !" << std::endl;
}
