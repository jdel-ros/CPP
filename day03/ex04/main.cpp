/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:47:28 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/22 09:17:59 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main(void)
{
	//CLAPTRAP
	ClapTrap bulma("Bluma", 50, 50, 50, 50, 1, 15, 40, 10);

	//FRAGTRAP

	FragTrap goku("Goku");
	// std::cout << std::endl;

	// goku.rangedAttack("Freezer");
	// goku.meleeAttack("Freezer");
	// goku.rangedAttack("Freezer");
	// goku.meleeAttack("Freezer");
	// goku.rangedAttack("Freezer");
	// goku.meleeAttack("Freezer");
	// goku.meleeAttack("Freezer");
	// std::cout << std::endl;

	// goku.beRepaired(20);
	// goku.beRepaired(20);
	// goku.beRepaired(20);
	// goku.beRepaired(20);
	// goku.beRepaired(20);
	// goku.beRepaired(20);
	// std::cout << std::endl;

	// goku.vaulthunter_dot_exe("Freezer");
	// goku.vaulthunter_dot_exe("Freezer");
	// goku.vaulthunter_dot_exe("Freezer");
	// goku.vaulthunter_dot_exe("Freezer");

	// std::cout << std::endl;

	// //SCAVTRAP
	ScavTrap vegeta("Vegeta");
	// std::cout << std::endl;

	// vegeta.rangedAttack("Cell");
	// vegeta.meleeAttack("Cell");
	// vegeta.rangedAttack("Cell");
	// vegeta.meleeAttack("Cell");
	// vegeta.rangedAttack("Cell");
	// vegeta.meleeAttack("Cell");
	// vegeta.meleeAttack("Cell");
	// std::cout << std::endl;

	// vegeta.beRepaired(20);
	// vegeta.beRepaired(20);
	// vegeta.beRepaired(20);
	// vegeta.beRepaired(20);
	// vegeta.beRepaired(20);
	// vegeta.beRepaired(20);
	// std::cout << std::endl;

	// vegeta.challengeNewcomer("Cell");
	// vegeta.challengeNewcomer("Cell");
	// vegeta.challengeNewcomer("Cell");
	// vegeta.challengeNewcomer("Cell");
	
	//NINJATRAP

	// NinjaTrap trunk("Trunk");
	NinjaTrap chichi("ChiChi");
	// std::cout << std::endl;

	// trunk.rangedAttack("Cell");
	// trunk.meleeAttack("Cell");
	// trunk.meleeAttack("Cell");
	// trunk.meleeAttack("Cell");
	// std::cout << std::endl;

	// trunk.beRepaired(20);
	// trunk.beRepaired(20);
	// trunk.beRepaired(20);
	// trunk.beRepaired(20);
	// trunk.beRepaired(20);
	// trunk.beRepaired(20);
	// std::cout << std::endl;

	// trunk.ninjaShoebox(chichi);
	// trunk.ninjaShoebox(vegeta);
	// trunk.ninjaShoebox(goku);
	// trunk.ninjaShoebox(bulma);

	//SUPERTRAP

	SuperTrap piccolo("Piccolo");
	std::cout << std::endl;

	piccolo.rangedAttack("Cell");
	piccolo.meleeAttack("Cell");
	piccolo.meleeAttack("Cell");
	piccolo.meleeAttack("Cell");
	std::cout << std::endl;
	std::cout << std::endl;
	piccolo.vaulthunter_dot_exe("Freezer");
	piccolo.vaulthunter_dot_exe("Freezer");
	std::cout << std::endl;
	std::cout << std::endl;
	piccolo.ninjaShoebox(chichi);
	piccolo.ninjaShoebox(vegeta);
	piccolo.ninjaShoebox(goku);
	piccolo.ninjaShoebox(bulma);
	return (0);
}
