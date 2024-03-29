/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:28:20 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/15 12:13:39 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_
# define _SCAVTRAP_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap( void );
	ScavTrap( std::string const name );
	ScavTrap( const ScavTrap& copy );
	ScavTrap& operator=( const ScavTrap& input);
	~ScavTrap( void );
	void attack( const std::string& target );
	void guardGate();
};

#endif
