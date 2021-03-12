/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:40:52 by juan              #+#    #+#             */
/*   Updated: 2021/03/12 11:10:12 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ): AMateria("cure")
{

}

Cure::~Cure( void )
{

}

Cure *	Cure::clone( void ) const
{
	return (new Cure);
}

void	Cure::use( ICharacter & target )
{
	_xp += 10;
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
