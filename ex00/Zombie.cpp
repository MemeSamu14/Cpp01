/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:58:35 by sfiorini          #+#    #+#             */
/*   Updated: 2025/05/31 16:18:26 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

// constructor
Zombie::Zombie(std::string name)
{
	this->name = name;
	return ;
}

// destructor
Zombie::~Zombie()
{
	std::cout<<"Zombie "<<getName()<<" destroyed."<<std::endl;
}

// getters
std::string Zombie::getName()
{
	return (this->name);	
}

// actions

void	Zombie::announce( void )
{
	std::cout<<getName()<<": BraiiiiiiinnnzzzZ..."<< std::endl;
}
