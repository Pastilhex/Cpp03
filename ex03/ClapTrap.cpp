/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:10:27 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/15 13:38:08 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("none"), _hitPoints(10), _energyPoints(10), _attackPoints(0) {
	std::cout << "ClapTrap created by default Constructor" << std::endl;
}

ClapTrap::ClapTrap( std::string const name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackPoints(0) {
	std::cout << "ClapTrap " << this->_name << " created by Constructor" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& copy ) : _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackPoints(copy._attackPoints) {
	std::cout << "ClapTrap just been copied from " << copy._name << "!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& input) {
	if (this != &input)
	{
		this->_name = input._name;
		this->_hitPoints = input._hitPoints;
		this->_energyPoints = input._energyPoints;
		this->_attackPoints = input._attackPoints;
	}	
	return *this;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackPoints << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{	std::cout << this->_name << " took " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
		this->_energyPoints--;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "You can't attack because you're out of energy!" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "You can't take more damaged! You're already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << this->_name << " repaired " << amount << " points of damage!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "You can't be repaired because you have no more energy points!" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "You can't be repaired because you're already dead!" << std::endl;
}

void ClapTrap::display_obj( void ) {
	std::cout << "*** ClapTrap Info *** " << std::endl;
	std::cout << "ClapTrap name: " << this->_name << "!" << std::endl;
	std::cout << "ClapTrap hitPoints: " << this->_hitPoints << "!" << std::endl;
	std::cout << "ClapTrap energyPoints: " << this->_energyPoints << "!" << std::endl;	
	std::cout << "ClapTrap attackPoints: " << this->_attackPoints << "!" << std::endl;	
}