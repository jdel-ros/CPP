/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:03:46 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/01 13:45:27 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:

	HumanA( std::string name, Weapon &Weapon );
	~HumanA( void );

	const std::string &getName( void ) const { return this->_name; };
	void	setName( std::string str);
	void	attack( void );

private:

	const std::string _name;
	Weapon &_weapon;
};

#endif
