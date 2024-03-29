/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:47:55 by juan              #+#    #+#             */
/*   Updated: 2021/03/10 08:11:09 by jdel-ros         ###   ########lyon.fr   */
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
	Zombie1 = Creation.newZombie("HumanZombie");
	Zombie2 = Creation.newZombie("ChemicalZombie");

	Creation.setZombieType("Tgrange");
	for (int i = 0; i < 5; i++)
		Creation.randomChump();

	delete Zombie1;
	delete Zombie2;

}
