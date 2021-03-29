/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:40:35 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/29 12:07:43 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify_from_pointer( Base * p )
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify_from_reference( Base & p )
{
	Base tmp;
	try
	{
		tmp = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast& bc)
	{
		std::cerr << "Failed Convertion" << bc.what() << std::endl;
	}

	try
	{
		tmp = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::bad_cast& bc)
	{
		std::cerr << "Failed Convertion" << bc.what() << std::endl;
	}
	
	try
	{
		tmp = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::bad_cast& bc)
	{
		std::cerr << "Failed Convertion" << bc.what() << std::endl;
	}
}

Base * 	generate( void )
{
	int i = 0;
	i = rand() % 3;
	if (i == 1)
		return new A();
	else if (i == 2)
		return new B();
	else
		return new C();
}

int			main( void )
{
	srand(static_cast<unsigned int>(time(NULL)));

	for (int i = 0; i < 3; i++)
	{
		Base *random = generate();
		std::cout << "Ptr " << i << " = ";
		identify_from_pointer(random);
		std::cout << "Ref " << i << " = ";
		identify_from_pointer(random);
		std::cout << std::endl;
	}
	return (0);
}
