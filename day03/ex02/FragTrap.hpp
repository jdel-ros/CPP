/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:57:32 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/05 10:43:16 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{

public:

	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	FragTrap & operator=( FragTrap const & rhs );

	void		rangedAttack( std::string const & target );
	void		meleeAttack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
	void		vaulthunter_dot_exe( std::string const & target );

private:

	// std::string _name;
	// int _hitPoints;
	// int _maxHitPoints;
	// int _energyPoints;
	// int _maxEnergyPoints;
	// int _level;
	// int _meleeAttackDamage;
	// int _rangedAttackDamage;
	// int _armorDamageReduction;
	static std::string _names_attack[5];

};

#endif
