/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:21:06 by juan              #+#    #+#             */
/*   Updated: 2021/02/24 16:49:00 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstring>

class Contact 
{
	Contact( void );
	~Contact( void );

	private:

	std::string first_name; std::string last_name; std::string nickname;
	std::string login; std::string adress; std::string email;
	std::string phone; std::string birthday; std::string meal;
	std::string underwear; std::string secret; int index;

	public :

	void	setFirstName(std::string f_n) { first_name = f_n; };
	std::string  getFirstName() { return first_name; };
	
	void	add(int count);
	void	print_search(std::string str);
};

#endif
