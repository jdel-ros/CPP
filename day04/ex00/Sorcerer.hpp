/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 10:17:32 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/08 15:01:49 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{

public:

	Sorcerer( std::string name, std::string type );
	~Sorcerer( void );
	Sorcerer( Sorcerer const & src );
	std::string getName( void ) const { return this->_name; };
	std::string getTitle( void ) const { return this->_title; };

	Sorcerer & operator=( Sorcerer const & rhs );
	void polymorph( Victim const & victim ) const;

private:

	Sorcerer( void );
	std::string _name;
	std::string _title;
};

std::ostream &		operator<<( std::ostream & o, Sorcerer const & i );

#endif