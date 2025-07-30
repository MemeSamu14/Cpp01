/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:37:37 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/12 15:14:40 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "pls pass something accettable" << std::endl;
	else
	{
		Harl	a;
		a.complain(av[1]);
	}
	return (0);
}