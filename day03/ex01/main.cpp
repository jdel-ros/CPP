/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:47:28 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/22 09:05:07 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap goku("Goku");
	std::cout << std::endl;

	goku.rangedAttack("Freezer");
	goku.meleeAttack("Freezer");
	goku.rangedAttack("Freezer");
	goku.meleeAttack("Freezer");
	goku.rangedAttack("Freezer");
	goku.meleeAttack("Freezer");
	goku.meleeAttack("Freezer");
	std::cout << std::endl;

	goku.beRepaired(20);
	goku.beRepaired(20);
	goku.beRepaired(20);
	goku.beRepaired(20);
	goku.beRepaired(20);
	goku.beRepaired(20);
	std::cout << std::endl;

	goku.vaulthunter_dot_exe("Freezer");
	goku.vaulthunter_dot_exe("Freezer");
	goku.vaulthunter_dot_exe("Freezer");
	goku.vaulthunter_dot_exe("Freezer");

	ScavTrap vegeta("Vegeta");
	ScavTrap Bulma(vegeta);
	std::cout << std::endl;

	Bulma.rangedAttack("Cell");
	Bulma.meleeAttack("Cell");
	Bulma.rangedAttack("Cell");
	Bulma.meleeAttack("Cell");
	Bulma.rangedAttack("Cell");
	Bulma.meleeAttack("Cell");
	Bulma.meleeAttack("Cell");
	std::cout << std::endl;

	Bulma.beRepaired(20);
	Bulma.beRepaired(20);
	Bulma.beRepaired(20);
	Bulma.beRepaired(20);
	Bulma.beRepaired(20);
	Bulma.beRepaired(20);
	std::cout << std::endl;

	Bulma.challengeNewcomer("Cell");
	Bulma.challengeNewcomer("Cell");
	Bulma.challengeNewcomer("Cell");
	Bulma.challengeNewcomer("Cell");
	
	return (0);
}
