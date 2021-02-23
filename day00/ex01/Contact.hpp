/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:21:06 by juan              #+#    #+#             */
/*   Updated: 2021/02/22 14:31:32 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact 
{
	public :

	Contact( void );
	Contact(std::string first_name, std::string last_name, std::string nickname, \
					std::string login, std::string adress, std::string email, \
					std::string phone, std::string birthday, std::string meal, \
					std::string underwear, std::string secret);
	~Contact( void );
	std::string first_name; std::string last_name; std::string nickname;
	std::string login; std::string adress; std::string email;
	std::string phone; std::string birthday; std::string meal;
	std::string underwear; std::string secret;
	void	add();
	void	print_search(int count, Contact *contact);
	
};

#endif