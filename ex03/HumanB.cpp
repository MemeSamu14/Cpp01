/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 11:53:44 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/07 12:21:11 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->name = name;
	this->weapon = NULL;
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}

void HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
	return	;
}


void	HumanB::attack( void )
{
	std::cout << this->name 
	<< " attacks with their " 
	<< this->weapon->getType()
	<< std::endl;
	return ;
}