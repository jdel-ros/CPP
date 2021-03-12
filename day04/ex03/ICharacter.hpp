/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:24:40 by juan              #+#    #+#             */
/*   Updated: 2021/03/12 11:20:07 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class ICharacter
{

public:

	virtual ~ICharacter( void ) {};
	virtual std::string const & getName( void ) const = 0;
	virtual void equip( AMateria* materia ) = 0;
	virtual void unequip( int i ) = 0;
	virtual void use( int i, ICharacter& target ) = 0;

};

#endif
