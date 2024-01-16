/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:10:00 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/16 14:13:44 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {

	ClapTrap obj1("Ivo");
	ClapTrap obj2("Marques");

	ScavTrap obj3("Joao");
	ScavTrap obj4("Almeida");

	FragTrap obj5("Heitor");
	FragTrap obj6("Maciel");

	DiamondTrap obj7("Nuno");
	DiamondTrap obj8("Soares");

	std::cout << std::endl;
	
	obj1.attack("João");
	obj3.takeDamage(0);
	obj3.beRepaired(0);
	obj3.display_obj();
	obj1.takeDamage(10);
	obj1.display_obj();
	obj1.takeDamage(10);
	
	// obj2.attack("Heitor");
	// obj5.takeDamage(20);
	// obj5.takeDamage(50);
	// obj5.beRepaired(20);
	// obj5.display_obj();

	// obj3.guardGate();
	// obj4.guardGate();

	// obj5.attack("Almeida");
	// obj5.highFivesGuys();

	// obj6.attack("Maciel");
	// obj6.highFivesGuys();

	// obj7.attack("Ivo");
	// obj7.takeDamage(20);	
	// obj7.beRepaired(20);
	// obj7.guardGate();
	// obj7.highFivesGuys();
	// obj7.display_obj();
	// obj7.whoAmI();

}

