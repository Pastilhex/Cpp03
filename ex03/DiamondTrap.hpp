/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:09:01 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/16 12:58:12 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_
# define _DIAMONDTRAP_

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string _name;
public:
	DiamondTrap( void );
	DiamondTrap( std::string const name );
	DiamondTrap( const DiamondTrap& copy );
	DiamondTrap& operator=( const DiamondTrap& input );
	virtual ~DiamondTrap( void );
	void attack( const std::string& target );
	void whoAmI();
};

#endif
