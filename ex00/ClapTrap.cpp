/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:10:27 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/11 15:51:25 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : hitPoints(10), energyPoints(10), attackPoints(0) {
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& input) {
	if (this != &input)
		*this = input;
	return *this;
}

ClapTrap::~ClapTrap( void ) {
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackPoints << " points of damage!" << std::endl;
	
}

void ClapTrap::takeDamage(unsigned int amount) {
	
	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	(void) amount;
}