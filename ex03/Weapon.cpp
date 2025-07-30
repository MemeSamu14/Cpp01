/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:44:03 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/07 12:15:40 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->type = type;
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

void	Weapon::setType( std::string type)
{
	this->type = type;
	return ;
}

const std::string Weapon::getType( void )
{
	return (this->type);
}
