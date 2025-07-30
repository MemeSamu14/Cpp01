/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:32:29 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/11 18:23:13 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::debug( void )
{
	std::cout << "hola, estoy debugando\n";
	return ;
}

void	Harl::info( void )
{
	std::cout << "hola, estoy controlando el info\n";
	return ;	
}
void	Harl::warning( void )
{
	std::cout << "hola, estoy en periculo\n";
	return ;	
}
void	Harl::error( void )
{
	std::cout << "hola, estoy loco\n";
	return ;
}

void	Harl::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
		&Harl::error
    };
	int	i = 0;
	while (level != levels[i] && i <= 3)
		i++;
	if (i < 4)
		(this->*functions[i])();
	else
		std::cout << "plese set somthing i can handle" << std::endl;
	return ;
}
