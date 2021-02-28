/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:47:55 by juan              #+#    #+#             */
/*   Updated: 2021/02/27 11:22:12 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int			main(void)
{
	ZombieEvent Creation;
	Zombie* Zombie1;
	Zombie* Zombie2;

	Creation.setZombieType("Human");
	Creation.setZombieType("NIQUE");
	Zombie1 = Creation.newZombie("Bison");
	Zombie2 = Creation.newZombie("NiqueseDay");

	for (int i = 0; i < 10; i++)
		Creation.randomChump();

	delete Zombie1;
	delete Zombie2;

}
