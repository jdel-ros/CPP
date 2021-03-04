/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:47:28 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/04 17:46:46 by juan             ###   ########lyon.fr   */
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
	std::cout << std::endl;

	vegeta.rangedAttack("Cell");
	vegeta.meleeAttack("Cell");
	vegeta.rangedAttack("Cell");
	vegeta.meleeAttack("Cell");
	vegeta.rangedAttack("Cell");
	vegeta.meleeAttack("Cell");
	vegeta.meleeAttack("Cell");
	std::cout << std::endl;

	vegeta.beRepaired(20);
	vegeta.beRepaired(20);
	vegeta.beRepaired(20);
	vegeta.beRepaired(20);
	vegeta.beRepaired(20);
	vegeta.beRepaired(20);
	std::cout << std::endl;

	vegeta.challengeNewcomer("Cell");
	vegeta.challengeNewcomer("Cell");
	vegeta.challengeNewcomer("Cell");
	vegeta.challengeNewcomer("Cell");
	
	return (0);
}
