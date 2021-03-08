/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:40:31 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/08 16:19:10 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( std::string const & name, int apcost, int damage ): _name(name), _apcost(apcost), _damage(damage)
{

}

AWeapon::~AWeapon( void )
{

}

AWeapon::AWeapon( AWeapon const & src ): _name(src._name), _apcost(src._apcost), _damage(src._damage)
{
	*this = src;
}

AWeapon &	AWeapon::operator=( AWeapon const & rhs )
{
	return *this;
}
