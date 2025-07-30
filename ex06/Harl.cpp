/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:32:29 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/12 15:15:23 by sfiorini         ###   ########.fr       */
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

enum Level {
  DEBUG,
  INFO,
  WARNING,
  ERROR
};

void	Harl::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;
	while (level != levels[i] && i <= 3)
		i++;
	switch (i) {
		case 0:
			this->debug();
		case 1:
			this->error();
		case 2:
			this->info();
		case 3:
			this->warning();
		case 4:
			std::cout << "dont' recognized" << std::endl;
	}
	return ;
}
