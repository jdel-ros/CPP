/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BottleOfTequila.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 08:37:12 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/11 08:38:09 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOTTLEOFTEQUILA_HPP
# define BOTTLEOFTEQUILA_HPP

#include "AWeapon.hpp"

class BottleOfTequila: virtual public AWeapon
{

public:

	BottleOfTequila( void );
	~BottleOfTequila( void );

	std::string const & getName( void ) const { return this->_name; };
	int getAPCost( void ) const { return this->_apcost; };
	int getDamage( void ) const { return this->_damage; };
	virtual void attack( void ) const;

private:

	BottleOfTequila & operator=( BottleOfTequila const & rhs );
	BottleOfTequila( BottleOfTequila const & src );

};

#endif