/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 11:53:44 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/07 12:19:07 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA( void )
{
	return ;
}

void	HumanA::attack( void )
{
	std::cout << this->name 
	<< " attacks with their " 
	<< this->weapon.getType()
	<< std::endl;
	return ;
}