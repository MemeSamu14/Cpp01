/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:44:03 by sfiorini          #+#    #+#             */
/*   Updated: 2025/06/07 12:15:36 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <iomanip>
#include <ios>

class	Weapon
{
	private:
		std::string type;
	public:
		Weapon( std::string type );
		~Weapon( void );
		const std::string getType( void );
		void	setType( std::string type );
};

#endif