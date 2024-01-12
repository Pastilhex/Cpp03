/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:10:30 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/11 15:02:57 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_
# define _CLAPTRAP_

#include <iostream>

class ClapTrap {
private:
	std::string	name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackPoints;

public:
	ClapTrap( void );
	ClapTrap(const ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& input);
	~ClapTrap( void );
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif