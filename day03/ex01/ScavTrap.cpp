/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:57:01 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/22 09:02:30 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): _name("Default"), _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	srand(time(NULL));
	std::cout << "The Master " << this->_name << " is ready to challenge you !" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	srand(time(NULL));
	std::cout << "The Master " << this->_name << " is ready to challenge you !" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ): _name(src._name), _hitPoints(src._hitPoints), _maxHitPoints(src._maxHitPoints), _energyPoints(src._energyPoints), _maxEnergyPoints(src._maxEnergyPoints), _level(src._level), _meleeAttackDamage(src._meleeAttackDamage), _rangedAttackDamage(src._rangedAttackDamage), _armorDamageReduction(src._armorDamageReduction)
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
	this->_name = rhs._name;
	return *this;
}

void	ScavTrap::takeDamage( unsigned int amount )
{
	this->_hitPoints -= amount - _armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	if (this->_hitPoints > 0)
		std::cout << "Cell block " << _armorDamageReduction << " HP with his armor" << std::endl;
	std::cout << "Cell have " << _hitPoints << " HP !" << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount )
{
	this->_hitPoints += amount;
	if (this->_hitPoints > _maxHitPoints)
		this->_hitPoints = _maxHitPoints;
	std::cout << "Cell have " << _hitPoints << " HP !" << std::endl;
}

void	ScavTrap::rangedAttack( std::string const & target )
{
	std::cout << this->_name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " points of damage !" << std::endl;
	takeDamage(15);
}

void	ScavTrap::meleeAttack( std::string const & target )
{
	std::cout << this->_name << " attacks " << target << " at melee, causing " << _meleeAttackDamage << " points of damage !" << std::endl;
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
	std::string attack = ScavTrap::_names_challenge[std::rand() % 5];
	std::cout << "Hello new comer " << target << " ! If you want to pass " << attack << std::endl;
}
