/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:25:55 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/29 14:27:45 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< typename T >
void		iter( T *arr, int size, void (*f)(T const &) )
{
	for(int i = 0; i < size; i++)
		f(arr[i]);
}

template< typename T >
void		ft_print( T const & src)
{
	std::cout << src;
}

#endif