/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:09:03 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/16 14:06:31 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap created by default Constructor" << std::endl;
	this->_name = "Default_diamond_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackPoints = FragTrap::_attackPoints;
}

DiamondTrap::DiamondTrap( std::string const dName ) : ClapTrap( dName ), ScavTrap( dName ), FragTrap( dName ) {
	std::cout << "DiamondTrap " << dName << " created by Constructor" << std::endl;
	this->_name = dName;
	ClapTrap::_name = dName + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackPoints = FragTrap::_attackPoints;
}

DiamondTrap::DiamondTrap( const DiamondTrap& copy ) : ClapTrap( copy ), ScavTrap( copy ), FragTrap( copy ) {
	std::cout << "DiamondTrap copied!" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackPoints = copy._attackPoints;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& input ) {
	std::cout << "DiamondTrap copy assigned!" << std::endl;
	this->_name = input._name;
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackPoints = input._attackPoints;
	return *this;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamonTrap destroyd!" << std::endl;
}

void DiamondTrap::attack( const std::string& target ) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "My Diamond name is " << this->_name << " and my Clap name is " << ClapTrap::_name << "." << std::endl;
}
