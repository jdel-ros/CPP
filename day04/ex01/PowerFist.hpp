/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:20:15 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/08 16:31:40 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: virtual public AWeapon
{

public:

	PowerFist( void );
	~PowerFist( void );

	std::string const & getName( void ) const { return this->_name; };
	int getAPCost( void ) const { return this->_apcost; };
	int getDamage( void ) const { return this->_damage; };
	virtual void attack( void ) const;

private:

	PowerFist & operator=( PowerFist const & rhs );
	PowerFist( PowerFist const & src );

};

#endif
