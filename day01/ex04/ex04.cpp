/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:44:30 by juan              #+#    #+#             */
/*   Updated: 2021/03/09 09:01:25 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int			main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strP = &str;
	std::string &strR = str;

	std::cout << "str = " << str << std::endl;
	std::cout << "Pointeur = " << *strP << std::endl;
	std::cout << "Reference = " << strR << std::endl;
}
