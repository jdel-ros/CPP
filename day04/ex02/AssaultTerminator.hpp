/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:17:26 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/11 11:18:08 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{

public:

	AssaultTerminator( void );
	AssaultTerminator( AssaultTerminator const & src );
	~AssaultTerminator( void );

	AssaultTerminator & operator=( AssaultTerminator const & rhs );
	virtual ISpaceMarine* clone( void ) const;
	void battleCry( void ) const;
	void rangedAttack( void ) const;
	void meleeAttack( void ) const;

// private:

};

#endif