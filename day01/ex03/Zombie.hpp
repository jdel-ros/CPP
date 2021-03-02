/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:26:37 by juan              #+#    #+#             */
/*   Updated: 2021/03/02 12:21:15 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{

public :

	Zombie( void );
	~Zombie( void );
	void		setName( std::string str ) { this->_name = str; };
	void		setType( std::string str ) { this->_type = str; };
	void		advert() const;

private :

	std::string _name;
	std::string _type;
};

#endif