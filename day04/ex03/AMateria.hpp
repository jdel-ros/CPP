/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:17:49 by juan              #+#    #+#             */
/*   Updated: 2021/03/12 10:37:53 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMAETERIA_HPP
# define AMAETERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{

public:

	AMateria( std::string const & type );
	AMateria( AMateria const & src );
	AMateria & operator=( AMateria const & rhs );	
	virtual ~AMateria();
	std::string const & getType() const { return this->_type; };
	unsigned int getXP() const { return this->_xp; };
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

protected:

	std::string _type;
	unsigned int _xp;

private:

	AMateria( void );

};

#endif