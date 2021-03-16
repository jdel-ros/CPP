/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:48:21 by juan              #+#    #+#             */
/*   Updated: 2021/03/16 08:12:29 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ): AMateria("Ice")
{

}

Ice::~Ice( void )
{

}

Ice *	Ice::clone( void ) const
{
	return (new Ice);
}

void	Ice::use( ICharacter & target )
{
	_xp += 10;
	std::cout << "* shoots an ice bolt at" <<  target.getName() << " *" << std::endl;
}
