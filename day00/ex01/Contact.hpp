/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:21:06 by juan              #+#    #+#             */
/*   Updated: 2021/02/26 10:45:17 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <regex>

# define REG_ALPHA "[a-zA-Z-' ]+"
# define REG_LETTER "[a-zA-Z,.!?-;:' ]+"
# define REG_ALNUM "[a-zA-Z0-9-' ]+"
# define REG_ALNUMAT "[a-zA-Z0-9- @'.]+"
# define REG_NUM "[0-9 ]+"
# define REG_NUMSL "[0-9/.]+"

class Contact 
{
public :

	Contact( void);
	~Contact( void );

	std::string  getFirstName( void ) const { return this->_first_name; };
	std::string  getLastName( void ) const { return this->_last_name; };
	std::string  getNickname( void ) const { return this->_nickname; };
	std::string  getLogin( void ) const { return this->_login; };
	std::string  getAdress( void ) const { return this->_adress; };
	std::string  getEmail( void ) const { return this->_email; };
	std::string  getPhone( void ) const { return this->_phone; };
	std::string  getBirthday( void ) const { return this->_birthday; };
	std::string  getMeal( void ) const { return this->_meal; };
	std::string  getUnderwear( void ) const { return this->_underwear; };
	std::string  getSecret( void ) const { return this->_secret; };
	int  getIndex( void ) const { return this->_index; };

	int		setFirstName( std::string str );
	int		setLastName( std::string str );
	int		setNickname( std::string str );
	int		setLogin( std::string str );
	int		setAdress( std::string str );
	int		setEmail( std::string str );
	int		setPhone( std::string str );
	int		setBirthday( std::string str );
	int		setMeal( std::string str );
	int		setUnderwear( std::string str );
	int		setSecret( std::string str );
	void	setIndex( int i );

	void	add(int count);
	void	print_search(std::string str);
	void	com_search(Contact contact[8], int count)  const ;
	void	print_index(int index, Contact contact[8]) const ;

private:

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _adress;
	std::string _email;
	std::string _phone;
	std::string _birthday;
	std::string _meal;
	std::string _underwear;
	std::string _secret;
	int _index;
};

#endif
