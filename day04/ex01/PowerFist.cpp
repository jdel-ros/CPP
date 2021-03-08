/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:20:49 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/08 16:31:36 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ): AWeapon( "Power Fist", 50, 8 )
{

}

PowerFist::~PowerFist( void )
{

}

void	PowerFist::attack( void ) const

{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
