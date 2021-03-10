/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:46:35 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/10 14:03:23 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{

public:

	RadScorpion( void );
	~RadScorpion( void );

	std::string const & getType( void ) const { return this->_type; };
	int getHP( void ) const { return this->_hp; };
	virtual void takeDamage( int d );
	void setHP( int i );

private:

	RadScorpion( RadScorpion const & src );
	RadScorpion & operator=( RadScorpion const & rhs );
};

#endif
