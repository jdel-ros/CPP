/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:47:03 by juan              #+#    #+#             */
/*   Updated: 2021/03/12 10:48:13 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{

public:

	Ice( std::string const & type );
	Ice( Ice const & src );
	Ice & operator=( Ice const & rhs );	
	~Ice();
	std::string const & getType() const { return this->_type; };
	unsigned int getXP() const { return this->_xp; };
	Ice* clone( void ) const;
	void use(ICharacter& target);

private:

	Ice( void );

};

#endif