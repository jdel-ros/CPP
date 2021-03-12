/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BottleOfTequila.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 08:38:26 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/11 09:01:41 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "BottleOfTequila.hpp"

BottleOfTequila::BottleOfTequila( void ): AWeapon( "Bottle of Tequila", 11, 60)
{

}

BottleOfTequila::~BottleOfTequila( void )
{

}

void	BottleOfTequila::attack( void ) const
{
	std::cout << "* glou glou glou *" << std::endl;
}