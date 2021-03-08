/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:30:58 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/08 15:12:40 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public virtual Victim
{

public:

	Peon( std::string name );
	~Peon( void );
	Peon( Peon const & src);
	std::string getName( void ) const { return this->_name; };
	Peon & operator=( Peon const & rhs );
	virtual void getPolymorphed( void ) const;
	
private:

	Peon( void );
};

#endif
