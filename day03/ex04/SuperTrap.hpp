/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 13:07:44 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/22 09:12:49 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{

public :

	SuperTrap( std::string name );
	SuperTrap( SuperTrap const & src );
	~SuperTrap( void );

	SuperTrap & operator=( SuperTrap const & rhs );
	void		rangedAttack( std::string const & target );
	void		meleeAttack( std::string const & target );

};

#endif
