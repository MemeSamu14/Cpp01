/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:45:15 by sfiorini          #+#    #+#             */
/*   Updated: 2025/05/31 16:43:39 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i] = Zombie(name);
	}
	return horde;
}
