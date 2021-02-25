/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:45:59 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/02/25 15:44:06 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <regex>

# define REG_GRAM "[0-9kgrammes ]+"
# define REG_INCH "[0-9inch ]+"
# define REG_KMH "[0-9kmh/ ]+"
# define REG_AGE "[a-z0-9- ]+"

class Pony
{
public :

	Pony( void );
	~Pony( void );

	std::string getHeight( void ) const { return this->_height; };
	std::string getWeight( void ) const { return this->_weight; };
	std::string getAge( void ) const { return this->_age; };
	std::string getSpeed( void ) const { return this->_speed; };

	int		setHeight( std::string str );
	int		setWeight( std::string str );
	int		setAge( std::string str );
	int		setSpeed( std::string str );

	void	put_age(std::string age);
	void	put_weight(std::string weight);
	void	put_speed(std::string speed);
	void	put_height(std::string height);
	void	print_info(std::string info);
	void	pony_eat(std::string meal);

private :

	std::string _height;
	std::string _weight;
	std::string _age;
	std::string _speed;
};

#endif