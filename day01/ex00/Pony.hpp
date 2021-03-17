/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:45:59 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/09 07:59:12 by jdel-ros         ###   ########lyon.fr   */
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

	Pony( std::string name, int weight );
	~Pony( void );

	void	 ponyOnTheStack(Pony ponyStack);
	void	 ponyOnTheHeap(Pony ponyHeap);
	std::string getName( void ) const { return this->_name; };
	int getWeight( void ) const { return this->_weight; };

	void		setName( std::string str );
	void		setWeight( int i );

	void	printPoney( void );
	void	pony_eat(std::string meal);

private :

	std::string _name;
	int _weight;
};

#endif
