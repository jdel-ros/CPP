/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 11:07:24 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/01 11:20:03 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void )
{
}

Human::~Human( void )
{
}

std::string Human::identify ( void ) const
{
	return (this->_brain.identify());
}
