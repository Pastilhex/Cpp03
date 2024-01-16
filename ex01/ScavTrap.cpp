/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:28:23 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/16 14:18:02 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << "ScavTrap created by default Constructor" << std::endl;
	this->_name = "default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackPoints = 20;
}

ScavTrap::ScavTrap( std::string const name ) : ClapTrap( name ) {
	std::cout << "ScavTrap " << name << " created by Constructor" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackPoints = 20;
}

ScavTrap::ScavTrap( const ScavTrap& copy ) : ClapTrap( copy ) {
	std::cout << "ScavTrap copied!" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackPoints = copy._attackPoints;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& input ) {
	if (this != &input)
	{
		this->_name = input._name;
		this->_hitPoints = input._hitPoints;
		this->_energyPoints = input._energyPoints;
		this->_attackPoints = input._attackPoints;
	}	
	return *this;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap destroyed!" << std::endl;
}

void ScavTrap::attack( const std::string& target ) {
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackPoints << " points of damage!" << std::endl;
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
