/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:37:59 by juan              #+#    #+#             */
/*   Updated: 2021/02/27 11:20:16 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

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