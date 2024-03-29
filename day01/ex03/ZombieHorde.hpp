/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:24:33 by juan              #+#    #+#             */
/*   Updated: 2021/03/09 08:59:09 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde
{
public:

	ZombieHorde( int n );
	~ZombieHorde( void );
	void	announce( void ) const ;

private:

	Zombie 	*_Zombies;
	int _nbZombies;
	static std::string		_types[3];
	static std::string		_names[5];
};

#endif
