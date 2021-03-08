/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:05:37 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/08 16:31:46 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: virtual public AWeapon
{

public:

	PlasmaRifle( void );
	~PlasmaRifle( void );

	std::string const & getName( void ) const { return this->_name; };
	int getAPCost( void ) const { return this->_apcost; };
	int getDamage( void ) const { return this->_damage; };
	virtual void attack( void ) const;

private:

	PlasmaRifle & operator=( PlasmaRifle const & rhs );
	PlasmaRifle( PlasmaRifle const & src );

};

#endif
