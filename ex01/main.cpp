/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:54:02 by sfiorini          #+#    #+#             */
/*   Updated: 2025/05/31 16:46:39 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	*a;

	a = zombieHorde(10, "Cazzi");
	int	i = 0;
	while (i < 10)
	{
		a[i].announce();
		i++;
	}
	delete[]	a;
	return (0);
}