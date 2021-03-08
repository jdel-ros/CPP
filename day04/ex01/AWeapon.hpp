/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:35:50 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/08 16:18:23 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{

public:

	AWeapon(std::string const & name, int apcost, int damage);
	~AWeapon( void );
	AWeapon( AWeapon const & src );
	AWeapon & operator=( AWeapon const & rhs );

	std::string const & getName( void ) const { return this->_name; };
	int getAPCost( void ) const { return this->_apcost; };
	int getDamage( void ) const { return this->_damage; };
	virtual void attack( void ) const = 0;

protected:

	std::string const & _name;
	int	_apcost;
	int _damage;

private: 

	AWeapon( void );

};

#endif