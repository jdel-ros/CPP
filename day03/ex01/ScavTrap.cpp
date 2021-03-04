/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:57:01 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/04 17:46:35 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): _name("Default"), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << "The Master " << this->_name << " is ready to challenge you !" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	(void)_energyPoints;
	(void)_maxEnergyPoints;
	(void)_level;
	(void)_meleeAttackDamage;
	(void)_rangedAttackDamage;
	std::cout << "The Master " << this->_name << " is ready to challenge you !" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	std::cout << "The copy of Master " << this->_name << " is ready to challenge you !" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap ( void )
{
	std::cout << "The Master " << this->_name << " was defeated !" << std::endl;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs)
{
	std::cout << "Assignement = have been called" << std::endl;
	this->_name = rhs._name;
	return *this;
}

void	ScavTrap::takeDamage( unsigned int amount )
{
	this->_hitPoints -= amount - _armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	if (this->_hitPoints > 0)
		std::cout << "Freezer block 5 HP with his armor" << std::endl;
	std::cout << "Freezer have " << _hitPoints << " HP !" << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount )
{
	this->_hitPoints += amount;
	if (this->_hitPoints > _maxHitPoints)
		this->_hitPoints = _maxHitPoints;
	std::cout << "Freezer have " << _hitPoints << " HP !" << std::endl;
}

void	ScavTrap::rangedAttack( std::string const & target )
{
	std::cout << this->_name << " attacks " << target << " at range, causing 15 points of damage !" << std::endl;
	takeDamage(15);
}

void	ScavTrap::meleeAttack( std::string const & target )
{
	std::cout << this->_name << " attacks " << target << " at melee, causing 20 points of damage !" << std::endl;
	takeDamage(20);
}

std::string ScavTrap::_names_challenge[5] =
{
	"reopens the restaurants, i'm starving !",
	"take off your mask I don’t recognize you !",
	"do my Ft_Services and maybe you’ll pass !",
	"answer to this question : Death or Chéché ?",
	"Bring me a mojito, i'm thirsty !",
};

void	ScavTrap::challengeNewcomer( std::string const & target )
{
	srand(time(NULL));
	std::string attack = ScavTrap::_names_challenge[std::rand() % 5];
	std::cout << "Hello new comer " << target << " ! If you want to pass " << attack << std::endl;
}
