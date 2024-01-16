/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:05:42 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/16 14:19:00 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap () {
	std::cout << "FragTrap created by default Constructor" << std::endl;
	this->_name = "default";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackPoints = 30;
}

FragTrap::FragTrap( std::string const name ) : ClapTrap( name ) {
	std::cout << "FragTrap " << this->_name << " created by Constructor" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackPoints = 30;
}

FragTrap::FragTrap( const FragTrap& copy ) : ClapTrap( copy ) {
	std::cout << "FragTrap copied" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackPoints = copy._attackPoints;
}

FragTrap& FragTrap::operator=( const FragTrap& input ) {
	if (this != &input)
	{
		this->_name = input._name;
		this->_hitPoints = input._hitPoints;
		this->_energyPoints = input._energyPoints;
		this->_attackPoints = input._attackPoints;
	}	
	return *this;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap destroyed!" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "Good work team! Mission accomplished!" << std::endl;
}
