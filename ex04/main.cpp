/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:11:22 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/11 16:25:59 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <iomanip>
#include <ios>
#include <fstream>

std::string	get_full_name(char *av);
std::string	replace(std::string	line, std::string s1, std::string s2);

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout 
		<< "Plese set a valid number of arguments" 
		<< std::endl;
		return (1);
	}
	else
	{
		std::ofstream	file_out(get_full_name(av[1]).c_str());
		std::string	tmp = av[1];
		std::ifstream	file_in(tmp.c_str());
		std::string	line;
		while (getline(file_in, line))
			file_out << replace(line, av[2], av[3]) << std::endl;
		file_in.close();
		file_out.close();
		
	}
	return (0);
}

std::string	get_full_name(char *av)
{
	std::string	tmp1 = av;
	std::string	tmp2 = ".replace";
	std::string	new_str = tmp1 + tmp2;
	return (new_str);
}

std::string	replace(std::string	line, std::string s1, std::string s2)
{
	std::string	new_str;

	int	occurence = 1;
	int	pos = 0;

	while (occurence != -1)
	{
		occurence = line.find(s1); // the reference to the str
		if (occurence == -1)
			break ;
		if (occurence != 0)
			new_str = new_str.append(line.substr(0, occurence));
		line = line.substr(occurence + s1.length(), line.length()); // update the line
		new_str = new_str.append(s2); // update new_str with the next part
		pos = occurence + s1.length(); // set the new position
		occurence = line.find(s1); // the reference to the str
	}
	new_str = new_str.append(line); // set the last part of the string
	return (new_str);
}
