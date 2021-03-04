/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:47:28 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/04 14:04:34 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap goku("Goku");
	// FragTrap gohan;
	// gohan = goku;
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
	return (0);
}
