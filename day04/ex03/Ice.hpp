/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:47:03 by juan              #+#    #+#             */
/*   Updated: 2021/03/16 09:45:39 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: virtual public AMateria
{

public:

	Ice( void );
	Ice( Ice const & src );
	Ice & operator=( Ice const & rhs );	
	~Ice();
	std::string const & getType() const { return this->_type; };
	unsigned int getXP() const { return this->_xp; };
	Ice* clone( void ) const;
	void use(ICharacter& target);

};

#endif
