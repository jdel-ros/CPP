/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:15:06 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/30 14:46:15 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
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
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--ite;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::stack<int> s(mstack);
	return(0);
}
