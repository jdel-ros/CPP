/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:24:17 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/11 11:27:29 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int			main( void )
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	(void)jim;
	(void)bob;
	// vlc->push(bob);
	// vlc->push(jim);

	// for (int i = 0; i < vlc->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }

	delete vlc;
	return 0;
}
