/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 10:22:45 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/11 11:42:56 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class Squad: public ISquad
{

public: 
	Squad( void );
	Squad( Squad const & src );
	~Squad( void );

	Squad & operator=( Squad const & rhs );
	int getCount( void ) const;
	ISpaceMarine* getUnit( int N ) const;
	int push( ISpaceMarine* unit );

private:

	ISpaceMarine *_unit;
	int	_count;

};

#endif
