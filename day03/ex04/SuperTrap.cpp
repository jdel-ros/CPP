/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 13:08:29 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/05 15:47:07 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( void ) : ClapTrap("Default", 100, 100, 120, 120, 1, 60, 20, 5)
{
	// _name = "Default";
	// _hitPoints = FragTrap::_hitPoints;
	// _maxHitPoints = FragTrap::_maxHitPoints;
	// _energyPoints = NinjaTrap::_energyPoints;
	// _maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	// _level = 1;
	// _meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	// _rangedAttackDamage = FragTrap::_rangedAttackDamage;
	// _armorDamageReduction = FragTrap::_armorDamageReduction;

	std::cout << "The SuperTrap Default was correctly created !" << std::endl;
}

SuperTrap::SuperTrap( std::string name ) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5)
{
	// _name = name;
	// _hitPoints = FragTrap::_hitPoints;
	// _maxHitPoints = FragTrap::_maxHitPoints;
	// _energyPoints = NinjaTrap::_energyPoints;
	// _maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	// _level = 1;
	// _meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	// _rangedAttackDamage = FragTrap::_rangedAttackDamage;
	// _armorDamageReduction = FragTrap::_armorDamageReduction;

	std::cout << "The SuerTrap" << this->_name << " was correctly created !" << std::endl;
}

SuperTrap::SuperTrap( SuperTrap const & src )
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
