/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:09:08 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/29 13:18:20 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template< typename T >
void	swap( T & lhs, T & rhs )
{
	T tmp = rhs;
	rhs = lhs;
	lhs = tmp;
}

template< typename T>
T const &		min( T const & lhs, T const & rhs )
{
	if (lhs == rhs)
		return rhs;
	else if (lhs < rhs)
		return lhs;
	else
		return rhs;
}

template< typename T>
T const &		max( T const & lhs, T const & rhs )
{
	if (lhs == rhs)
		return rhs;
	else if (lhs > rhs)
		return lhs;
	else
		return rhs;
}

#endif