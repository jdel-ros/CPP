/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:55:21 by juan              #+#    #+#             */
/*   Updated: 2021/02/27 12:09:07 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string.h>

class Brain
{

public:

	Brain( int age, int nbNeur, std::string name );
	~Brain( void );
	std::string identifier( void ) const ;

private:

	int _age;
	int _nbNeur;
	std::string _name;

};

#endif