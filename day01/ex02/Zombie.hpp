/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:26:37 by juan              #+#    #+#             */
/*   Updated: 2021/02/27 11:21:25 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{

public :

	Zombie( std::string name, std::string type);
	~Zombie( void );
	void		setName( std::string str ) { this->_name = str; };
	void		setType( std::string str ) { this->_type = str; };
	void		advert() const;

private :

	std::string _name;
	std::string _type;

};

#endif