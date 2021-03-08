/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:32:53 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/08 16:45:45 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{

public:

	Enemy(int hp, std::string const & type);
	~Enemy( void );

	std::string const & getType( void ) const { return this->_type; };
	int getHP( void ) const { return this->_hp; };
	virtual void takeDamage( int d );

protected:

	int _hp;
	std::string const & _type;

private:
	Enemy( void );
	Enemy( Enemy const & src );
	Enemy & operator=( Enemy const & rhs );

};

#endif