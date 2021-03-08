/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:48:03 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/08 15:12:47 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{

public:

	Victim( std::string name );
	~Victim( void );
	Victim( Victim const & src);
	std::string getName( void ) const { return this->_name; };
	Victim & operator=( Victim const & rhs );
	virtual void getPolymorphed( void ) const;

protected:

	Victim( void );
	std::string _name;

};

std::ostream &		operator<<( std::ostream & o, Victim const & i);

#endif
