/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:56:08 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/11 18:23:05 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void )
{
	Harl	a;

	a.complain("Ciao");
	a.complain("DEBUG");
	a.complain("INFO");
	a.complain("WARNING");
	a.complain("ERROR");



	return (0);
}