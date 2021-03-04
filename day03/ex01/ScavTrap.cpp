/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:57:01 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/04 15:31:35 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): _name("Default"), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << "The Master " << this->_name << " is ready to challenge you !" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
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
	// "Je ne fais pas de bruit quand je me réveille mais je réveille tout le monde. Qui suis-je ?"
	"I don’t make a sound when I wake up, but I wake everyone up. Who the hell am I?",
	// "Trois poissons sont dans un seau, l’un d’entre meurt, combien en reste t-il?"
	"Three fish are in a bucket, one dies, how many are left?",
	// "Qu’est ce qui est plus grand que la Tour Eiffel, mais infiniment moins lourd."
	"What is bigger than the Eiffel Tower, but infinitely less heavy.",
	// "Lors d'une course de vélo, un cycliste double le deuxième ? Il devient..."
	"During a bike race, a cyclist doubles the second? He becomes...",
	// "Combien de jours y a-t-il dans 4 ans?"
	"How many days ago in four years?",
};

void	ScavTrap::challengeNewcomer( std::string const & target )
{
	srand(time(NULL));
	int rand = std::rand() % 5;
	std::string attack = ScavTrap::_names_challenge[rand];
	if (rand == 0)
		challenge0();
	else if (rand == 1)
		challenge1();
	if (rand == 2)
		challenge2();
	if (rand == 3)
		challenge3();
	if (rand == 4)
		challenge4();
}