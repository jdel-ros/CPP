/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:17:49 by juan              #+#    #+#             */
/*   Updated: 2021/03/16 13:25:58 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{

public:

	AMateria( std::string const & type );
	AMateria( AMateria const & src );
	AMateria & operator=( AMateria const & rhs );	
	virtual ~AMateria( void );

	std::string const & getType( void ) const { return this->_type; };
	unsigned int getXP( void ) const { return this->_xp; };
	virtual AMateria* clone( void ) const = 0;
	virtual void use( ICharacter& target ) = 0;

protected:

	AMateria( void );
	std::string _type;
	unsigned int _xp;

};

#endif
