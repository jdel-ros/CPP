/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:47:51 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/10 12:56:46 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"

class Character
{

public:

	Character(std::string const & name);
	Character( Character const & src );
	Character & operator=( Character const & rhs );
	~Character( void );
	void recoverAP( void );
	void equip( AWeapon *weapon );
	void attack( Enemy *enemy );
	std::string	getTypeWeapon( void ) const { return _weapon->getName(); };
	int	getAP( void ) const { return this->_actionPoints; };
	std::string const & getName( void ) const { return this->_name; };

private:

	Character( void );
	std::string _name;
	AWeapon *_weapon;
	Enemy *_enemy;
	int _actionPoints;

};

std::ostream &		operator<<( std::ostream & o, Character const & i );

#endif