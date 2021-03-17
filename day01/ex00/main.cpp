/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:20:32 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/09 08:08:47 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony ponyStack = Pony("Dider", 89);	
	std::string buf;

	std::string Pasta = "pasta";
	std::string Vegetables = "vegetables";
	std::string Nothing = "";

	ponyStack.printPoney();
	std::cout << "Didier gonna eat : " << std::endl;
	ponyStack.pony_eat(Pasta);
	ponyStack.pony_eat(Vegetables);
	ponyStack.pony_eat(Nothing);
}

void ponyOnTheHeap()
{
	Pony  *ponyHeap = new Pony("Jacques", 96);	
	std::string buf;

	std::string Pasta = "pasta";
	std::string Vegetables = "vegetables";
	std::string Nothing = "";
	ponyHeap->printPoney();

	std::cout << "Jacques gonna eat : " << std::endl;
	ponyHeap->pony_eat(Pasta);
	ponyHeap->pony_eat(Vegetables);
	ponyHeap->pony_eat(Nothing);

	delete ponyHeap;
}

int				main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
