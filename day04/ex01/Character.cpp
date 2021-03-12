/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:52:10 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/11 09:06:01 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const & name ) : _name(name), _actionPoints(40)
{

}

Character::~Character( void )
{

}

Character::Character( Character const & src ): _name(src._name)
{
	*this = src;
}

Character &	Character::operator=( Character const & rhs )
{
	this->_name = rhs._name;
	// this->_apcost = rhs._apcost;
	// this->_damage = rhs._damage;;
	return *this;
}

void	Character::recoverAP( void )
{
	if (_actionPoints <= 30)
		_actionPoints += 10;
	else if (_actionPoints > 30 && _actionPoints < 40)
		_actionPoints = 40;
}

void	Character::equip( AWeapon *weapon )
{
	_weapon = weapon;
}

void	Character::attack( Enemy *enemy )
{
	if (enemy->getHP() <= 0)
		return ;
	if (_weapon == NULL)
		return ;
	_actionPoints -= _weapon->getAPCost();
	if (_actionPoints <= 0)
		return ;
	_enemy = enemy;
	std::cout << _name << " attacks " << _enemy->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	_enemy->setHP(_weapon->getDamage());
	if (_enemy->getHP() <= 0)
		delete enemy;
}

std::ostream & 		operator<<( std::ostream & o, Character const & i )
{
	if (i.getTypeWeapon() == "Plasma Rifle" || i.getTypeWeapon() ==  "Power Fist" || i.getTypeWeapon() == "Bottle of Tequila")
		o << i.getName() << " has " << i.getAP() << " AP and wields a " << i.getTypeWeapon() << std::endl;
	else 
		o << i.getName() << " has " << i.getAP() << " AP and is unarmed" << std::endl;
	return o;
}
