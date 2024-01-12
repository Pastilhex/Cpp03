/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:10:27 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/12 16:19:57 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("none"), hitPoints(10), energyPoints(10), attackPoints(0) {
	std::cout << "ClapTrap created by default Constructor" << std::endl;
}

ClapTrap::ClapTrap( std::string const name ) : name(name), hitPoints(10), energyPoints(10), attackPoints(0) {
	std::cout << "ClapTrap " << this->name << " created by Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	std::cout << "ClapTrap copied!" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& input) {
	if (this != &input)
		*this = input;
	return *this;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackPoints << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{	std::cout << this->name << " took " << amount << " points of damage!" << std::endl;
		this->hitPoints -= amount;
		this->energyPoints--;
	}
	else if (this->energyPoints <= 0)
		std::cout << "You can't attack because you're out of energy!" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "You can't take more damaged! You're already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << this->name << " repaired " << amount << " points of damage!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else if (this->energyPoints <= 0)
		std::cout << "You can't be repaired because you have no more energy points!" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "You can't be repaired because you're already dead!" << std::endl;
}
