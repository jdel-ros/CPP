/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TArray.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:07:35 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/29 16:56:46 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARRAY_HPP
# define TARRAY_HPP

#include <iostream>

template< typename T >
class Array
{

public:

	Array(): _array(NULL), _n(0) {};
	Array( unsigned int n): _array(new T[n]), _n(n) {};
	Array( Array const & src ): _n(src._n)
	{
		this->_array = new T[src._n];
		for(unsigned long i = 0; i < src._n; i++)
			this->_array[i] = src._array[i];
	}
	
	~Array()
	{
		if (this->_array != NULL)
			delete [] this->_array;
	}

	unsigned int	size( void ) const { return this->_n; };

	Array &		operator=( Array const & rhs )
	{
		if (this != &rhs)
		{
			if (this->_array != NULL)
				delete [] this->_array;
			_n = rhs._n;
			this->_array = new T[rhs._n];
			for(unsigned long i = 0; i < rhs._n; i++)
				this->_array[i] = rhs._array[i];
		}
		return *this;
	}

	T &		operator[]( unsigned int i ) const
	{
		if (i < 0 || i >= this->_n || this->_array == NULL)
			throw std::exception();
		return this->_array[i];
	}

private:

	T * _array;
	unsigned int _n;
};

#endif
