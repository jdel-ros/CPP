/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:20:32 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/02/26 12:09:56 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony ponyStack = Pony("Dider", "5 years old", "75km/h", 89);	
	std::string buf;

	std::string Pasta = "pasta";
	std::string Vegetables = "vegetables";
	std::string Nothing = "";
	ponyStack.print_info("name");
	ponyStack.print_info("weight");
	ponyStack.print_info("age");
	ponyStack.print_info("speed");
	std::cout << "Poney gonna eat : " << std::endl;
	ponyStack.pony_eat(Pasta);
	ponyStack.pony_eat(Vegetables);
	ponyStack.pony_eat(Nothing);
}

void ponyOnTheHeap()
{
	Pony  *ponyHeap = new Pony("Jacques", "7 years old", "82km/h", 96);	
	std::string buf;

	std::string Pasta = "pasta";
	std::string Vegetables = "vegetables";
	std::string Nothing = "";
	ponyHeap->print_info("name");
	ponyHeap->print_info("weight");
	ponyHeap->print_info("age");
	ponyHeap->print_info("speed");

	std::cout << "Poney gonna eat : " << std::endl;
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