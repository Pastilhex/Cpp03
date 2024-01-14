/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:28:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/14 18:10:06 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << "ScavTrap created by default Constructor" << std::endl;
	this->name = "default";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackPoints = 20;
}

ScavTrap::ScavTrap( std::string const name ) : ClapTrap( name ) {
	std::cout << "ScavTrap " << name << " created by Constructor" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackPoints = 20;
}

ScavTrap::ScavTrap( const ScavTrap& copy ) : ClapTrap( copy ) {
	std::cout << "ScavTrap copied!" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& input ) {
	if (this != &input)
	{
		this->name = input.name;
		this->hitPoints = input.hitPoints;
		this->energyPoints = input.energyPoints;
		this->attackPoints = input.attackPoints;
	}	
	return *this;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destroyed!" << std::endl;
}

void ScavTrap::attack( const std::string& target ) {
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackPoints << " points of damage!" << std::endl;
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
