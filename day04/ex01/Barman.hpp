/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Barman.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:19:41 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/10 14:20:46 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BARMAN_HPP
# define BARMAN_HPP

#include "Enemy.hpp"

class Barman: public Enemy
{

public:

	Barman( void );
	~Barman( void );

	std::string const & getType( void ) const { return this->_type; };
	int getHP( void ) const { return this->_hp; };
	virtual void takeDamage( int d );
	void setHP( int i );

private:

	Barman( Barman const & src );
	Barman & operator=( Barman const & rhs );
};

#endif