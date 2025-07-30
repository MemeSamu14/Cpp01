/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:14:17 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/06 18:42:18 by sfiorini         ###   ########.fr       */
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

int		main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string	&strREF = str;

	std::cout << "Memory address" << std::endl;
	std::cout << "str   : " << &str << std::endl;
	std::cout << "strPTR: " << strPTR << std::endl;
	std::cout << "strREF: " << &strREF << std::endl;
	
	std::cout << std::endl;

	std::cout << "Value of the string" << std::endl;
	std::cout << "str   : " << str << std::endl;
	std::cout << "strPTR: " << *strPTR << std::endl;
	std::cout << "strREF: " << strREF << std::endl;
	return (0);
}