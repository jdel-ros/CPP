/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:24:33 by juan              #+#    #+#             */
/*   Updated: 2021/02/27 11:34:25 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde
{
public:

	ZombieHorde( int n );
	~ZombieHorde( void );
	void	annonce( void ) const ;

	private:

	Zombie 	*_Zombies;
	int _nbZombies;
	static std::string		_types[3];
	static std::string		_names[5];
};