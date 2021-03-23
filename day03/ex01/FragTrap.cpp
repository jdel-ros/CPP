/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:57:34 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/22 09:03:43 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ): _name("Default"), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	srand(time(NULL));
	std::cout << "The Saiyan " << this->_name << " arrived on Namek !" << std::endl;
}

FragTrap::FragTrap( std::string name ): _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	srand(time(NULL));
	std::cout << "The Saiyan " << this->_name << " arrived on Namek !" << std::endl;
}

FragTrap::FragTrap(  FragTrap const & src ): _name(src._name), _hitPoints(src._hitPoints), _maxHitPoints(src._maxHitPoints), _energyPoints(src._energyPoints), _maxEnergyPoints(src._maxEnergyPoints), _level(src._level), _meleeAttackDamage(src._meleeAttackDamage), _rangedAttackDamage(src._rangedAttackDamage), _armorDamageReduction(src._armorDamageReduction)
{
	std::cout << "The copy of Saiyan " << this->_name << " arrived too on Namek !" << std::endl;
	*this = src;
}

FragTrap::~FragTrap ( void )
{
	std::cout << "The Saiyan " << this->_name << " was killed, bring together the 7 cristal ball for resurrect him !" << std::endl;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs)
{
	this->_name = rhs._name;
	return *this;
}

void	FragTrap::takeDamage( unsigned int amount )
{
	this->_hitPoints -= amount - _armorDamageReduction;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	if (this->_hitPoints > 0)
		std::cout << "Freezer block " << _armorDamageReduction << " HP with his armor" << std::endl;
	std::cout << "Freezer have " << _hitPoints << " HP !" << std::endl;
}

void	FragTrap::beRepaired( unsigned int amount )
{
	this->_hitPoints += amount;
	if (this->_hitPoints > _maxHitPoints)
		this->_hitPoints = _maxHitPoints;
	std::cout << "Freezer have " << _hitPoints << " HP !" << std::endl;
}

void	FragTrap::rangedAttack( std::string const & target )
{
	std::cout << this->_name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " points of damage !" << std::endl;
	takeDamage(_rangedAttackDamage);
}

void	FragTrap::meleeAttack( std::string const & target )
{
	std::cout << this->_name << " attacks " << target << " at melee, causing " << _meleeAttackDamage << " points of damage !" << std::endl;
	takeDamage(_meleeAttackDamage);
}

std::string FragTrap::_names_attack[5] =
{
	"Kamehameha",
	"Genkidama",
	"Kaïoken",
	"Nuage supersonique",
	"Singe Géant",
};

void	FragTrap::vaulthunter_dot_exe( std::string const & target )
{
	std::string attack = FragTrap::_names_attack[std::rand() % 5];

	_energyPoints -= 25;	
	if (_energyPoints >= 0)
	{
		std::cout << this->_name << " attacks " << target << " with "<< attack << ", causing 35 points of damage !" << std::endl;
		std::cout << this->_name << " have " << _energyPoints << " mana" << std::endl;
		if (attack.compare("Genkidama") == 0)
		{
			std::cout << "The power of the planet is gather in " << this->_name << " !!! " << std::endl;
			takeDamage(105);
		}
		else
			takeDamage(20);
	}
	else
	{
		std::cout << this->_name << " want attack with " << attack << " but he have no more mana, go to eat and come back !" << std::endl; 
	}
}
