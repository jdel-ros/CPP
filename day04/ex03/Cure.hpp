/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:37:03 by juan              #+#    #+#             */
/*   Updated: 2021/03/12 10:44:55 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{

public:

	Cure( std::string const & type );
	Cure( Cure const & src );
	Cure & operator=( Cure const & rhs );	
	~Cure();
	std::string const & getType() const { return this->_type; };
	unsigned int getXP() const { return this->_xp; };
	Cure* clone( void ) const;
	void use(ICharacter& target);

private:

	Cure( void );

};

#endif