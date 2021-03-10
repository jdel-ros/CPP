/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:40:25 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/10 14:03:13 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{

public:

	SuperMutant( void );
	~SuperMutant( void );

	std::string const & getType( void ) const { return this->_type; };
	int getHP( void ) const { return this->_hp; };
	virtual void takeDamage( int d );
	void setHP( int i );

private:

	SuperMutant( SuperMutant const & src );
	SuperMutant & operator=( SuperMutant const & rhs );
};

#endif
