/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:44:03 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/07 12:27:50 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA( std::string name, Weapon &weapon ): name(name), weapon(weapon){};
		~HumanA( void );
		void	attack( void );
};

#endif