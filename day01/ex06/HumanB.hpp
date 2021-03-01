/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:03:46 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/01 14:39:36 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:

	HumanB( std::string name );
	~HumanB( void );

	const std::string &getName( void ) const { return this->_name; };
	Weapon *getWeapon( void ) const { return this->_weapon; };
	void	setWeapon( Weapon &weapon ) { this->_weapon = &weapon; };
	void	attack( void );

private:

	const std::string _name;
	Weapon *_weapon;
};

#endif
