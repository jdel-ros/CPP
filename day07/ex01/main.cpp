/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:43:23 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/29 14:28:46 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main(void)
{
	int		arr[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	iter(arr, 11, ft_print);
	std::cout << std::endl;
	std::string arr2[5] = {"salut ", "toi ", "comment ", "ça ", "va ?"};
	iter(arr2, 5, ft_print);
	std::cout << std::endl;

	return (0);
}
