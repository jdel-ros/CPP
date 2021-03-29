/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:06:07 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/29 08:27:42 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>

struct Data
{
	std::string s1;
	int			n;
	std::string s2;
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

Data		*deserialize( void * raw)
{
	Data * deserialize = new Data;

	char * str = reinterpret_cast<char *>(raw);
	deserialize->s1 = std::string(str, 8);
	deserialize->n = *reinterpret_cast<int *>(str + 8);
	deserialize->s2 = std::string(str + 8 + sizeof(int), 8);
	return deserialize;
}

int			main( void )
{
	srand(static_cast<unsigned int>(time(NULL)));
	void *serialize_str = serialize();
	std::cout << serialize_str << std::endl;
	unsigned char *str = reinterpret_cast<unsigned char *>(serialize_str);
	for(unsigned long i = 0; i < 8; i++)
		std::cout << str[i];
	std::cout << " " << *reinterpret_cast<int *>(str + 8);
	std::cout << " ";
	for(unsigned long i = 8 + sizeof(int); i < 16 + sizeof(int); i++)
		std::cout << str[i];
	std::cout << std::endl;

	Data *data = deserialize(serialize_str);
	std::cout << data->s1 << " " << data->n  << " " << data->s2 << std::endl;

	delete data;
	return (0);
}
