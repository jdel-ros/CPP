/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:15:06 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/15 09:14:24 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	MutantStack<int> mstack2(mstack);
	MutantStack<int> mstack3 = mstack;
	std::cout << "Size1: " << mstack.size() << std::endl;;
	std::cout << "Size2: " << mstack2.size() << std::endl;;
	std::cout << "Size3: " << mstack3.size() << std::endl;;
	std::cout << "Top : " << mstack.top() << std::endl;
	mstack.pop();
	mstack.pop();
	std::cout << "Empty : " << mstack.empty() << std::endl;
	std::cout << "Size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "Empty : " << mstack.empty() << std::endl;
	std::cout << "Size : " << mstack.size() << std::endl;
	for (int i = 0; i < 10; i++)
		mstack.push(i);
	std::cout << "Size : " << mstack.size() << std::endl;
	MutantStack<int>::iterator itb = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	// ++itb;
	// --ite;
	while (itb != ite)
	{
		std::cout << *itb << " ";
		++itb;
	}
	return(0);
}
