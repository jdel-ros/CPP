/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:55:21 by juan              #+#    #+#             */
/*   Updated: 2021/03/01 11:09:33 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string.h>
#include <sstream>

class Brain
{

public:

	Brain( void );
	~Brain( void );

	int	getAge( void ) const { return this->_age; };
	std::string	getNbneur( void ) const { return this->_Nbneur; };
	std::string	getName( void ) const { return this->_name; };

	void		setAge( int age );
	void		setNbneur( std::string nbNeur );
	void		setName( std::string str );

	std::string identify( void ) const ;
	void	initvar( void );

private:

	int _age;
	std::string _Nbneur;
	std::string _name;

};

#endif
