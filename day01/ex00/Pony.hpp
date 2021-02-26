/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:45:59 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/02/26 12:02:54 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <iomanip>
#include <cstring>

class Pony
{
public :

	Pony( std::string name, std::string age, std::string speed, int weight );
	~Pony( void );

	void	 ponyOnTheStack(Pony ponyStack);
	void	 ponyOnTheHeap(Pony ponyHeap);
	std::string getName( void ) const { return this->_name; };
	int getWeight( void ) const { return this->_weight; };
	std::string getAge( void ) const { return this->_age; };
	std::string getSpeed( void ) const { return this->_speed; };

	void		setName( std::string str );
	void		setWeight( int i );
	void		setAge( std::string str );
	void		setSpeed( std::string str );

	void	print_info(std::string info);
	void	pony_eat(std::string meal);

private :

	std::string _name;
	int _weight;
	std::string _age;
	std::string _speed;
};

#endif