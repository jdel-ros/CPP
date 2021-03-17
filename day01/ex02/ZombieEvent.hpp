/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:37:59 by juan              #+#    #+#             */
/*   Updated: 2021/03/09 08:41:53 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <time.h>

class ZombieEvent
{
public :

	ZombieEvent( void );
	~ZombieEvent( void );
	void	setZombieType(std::string type);
	std::string	getZombieType() { return this->_type; } ;
	void	randomChump();
	Zombie	*newZombie(std::string name) const;

private :

	static std::string _names_rand[5];
	std::string _type;

};

#endif
