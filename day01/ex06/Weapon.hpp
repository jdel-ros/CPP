/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:52:38 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/02 14:06:44 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{

public:

	Weapon( std::string type );
	Weapon( void );

	const std::string getType( void ) const { return this->_type; };
	void		setType( const std::string str ) { this->_type = str; };

private:

	std::string _type;
};

#endif
