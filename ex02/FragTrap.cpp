/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:05:42 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/14 17:54:09 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ScavTrap () {
	std::cout << "FragTrap created by default Constructor" << std::endl;
	this->name = "default";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackPoints = 30;
}

FragTrap::FragTrap( std::string const name ) {
	std::cout << "FragTrap " << this->name << " created by Constructor" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackPoints = 30;
}

FragTrap::FragTrap( const FragTrap& copy ) : ScavTrap( copy ) {
	std::cout << "FragTrap copied" << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=( const FragTrap& input ) {
	if (this != &input)
		*this = input;
	return *this;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap destroyed!" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "Good work team! Mission accomplished!" << std::endl;
}
