/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:34:31 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/05 15:29:36 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{

public:

	NinjaTrap( void );
	NinjaTrap( std::string name );
	NinjaTrap( NinjaTrap const & src );
	~NinjaTrap( void );

	NinjaTrap & operator=( NinjaTrap const & rhs );

	std::string	getName( void ) { return this->_name; };
	void		rangedAttack( std::string const & target );
	void		meleeAttack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
	void		ninjaShoebox( NinjaTrap & NinjaTarget );
	void		ninjaShoebox( ClapTrap & ClapTarget );
	void		ninjaShoebox( ScavTrap & ScavTarget );
	void		ninjaShoebox( FragTrap & FragTarget );

};

#endif
