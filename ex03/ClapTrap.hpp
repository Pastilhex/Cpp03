/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:10:30 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/15 13:36:40 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_
# define _CLAPTRAP_

#include <iostream>

class ClapTrap {
protected:
	std::string	_name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackPoints;

public:
	ClapTrap( void );
	ClapTrap( std::string const name );
	ClapTrap( const ClapTrap& copy );
	ClapTrap& operator=( const ClapTrap& input );
	~ClapTrap( void );
	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	void display_obj( void );
};

#endif
