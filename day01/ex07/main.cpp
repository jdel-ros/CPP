/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:44:45 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/01 16:00:02 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int			main(int argc, char **argv)
{
	(void)argc;
	// if (argc != 4)
	// {
	// 	std::cout << "don't troll dude" << std::endl;
	// 	return (0);
	// }
	// if (argv[2] == NULL || argv[3] == NULL || argv[4] == NULL)
	// {
	// 	std::cout << "don't troll dude" << std::endl;
	// 	return (0);
	// }
	std::string buff;
	std::string buf;
	buff = argv[1];
	buff.append(".replace");
	std::ifstream	ifs(argv[1]);
	std::ofstream ofs(buff);

	while (std::getline(ifs, buf))
	{
		std::cout << buf << std::endl;
		size_t	pos(0);
		std::string		resul;

		while (!buf.empty())
		{
			if ((pos = buf.find(argv[2], pos)) != std::string::npos)
			{
				std::cout << pos << std::endl;
				buf.replace(pos, std::string(argv[3]).size(), argv[3]);
			}
			ofs << buf.substr(0, pos);
			buf.erase(0, pos);
		}
			if (!ifs.eof())
				ofs << std::endl;
	}
	return (0);
}
