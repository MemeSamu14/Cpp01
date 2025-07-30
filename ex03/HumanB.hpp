/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:49:29 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/07 12:23:38 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string name;
		Weapon	*weapon;
	public:
		HumanB( std::string name );
		~HumanB( void );
		void	setWeapon( Weapon &weapon );
		void	attack( void );
};

#endif