/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:05:13 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/01 11:22:09 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#ifndef HUMAN_HPP
# define HUMAN_HPP

class Human
{

public:

	Human( void );
	~Human( void );

	std::string identify( void ) const ;
	const Brain &getBrain( void ) const { return this->_brain; } ;

private:

	const Brain _brain;
};

#endif
