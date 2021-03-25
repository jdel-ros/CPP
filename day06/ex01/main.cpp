/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:06:07 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/25 13:39:27 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>

struct Data
{
	std::string s1;
	std::string s2;
	int			n;
};

void		*serialize( void )
{
	char		str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char *		serialize_str = new char[16 + sizeof(int)];

	for(unsigned long i = 0; i < 8; i++)
		serialize_str[i] = str[static_cast<unsigned long>(rand()) % sizeof(str)];

	*reinterpret_cast<int *>(serialize_str + 8) = rand() % 100000;

	for(unsigned long i = 0; i < 8; i++)
		serialize_str[i + 8 + sizeof(int)] = str[static_cast<unsigned long>(rand ()) % sizeof(str)];

	return serialize_str;
}

void		*deserialize( void * raw)
{

}

int			main( void )
{
	srand(static_cast<unsigned int>(time(NULL)));
	void *serialize_str = serialize();
	std::cout << serialize_str << std::endl;

	char *c = reinterpret_cast<char *>(serialize_str);
	for(unsigned long i = 0; i < 8; i++)
		std::cout << c[i];
	std::cout << " " << *reinterpret_cast<int *>(c + 8) << std::cout << " ";
	for(unsigned long i = 8 + sizeof(int); i < 16 + sizeof(int); i++)
		std::cout << c[i];
	std::cout << std::endl;
	return (0);
}
