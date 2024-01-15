/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:10:00 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/15 11:06:59 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
	ClapTrap ivo("Ivo");
	ClapTrap joao("João");
	ClapTrap daniel;
	daniel = ivo;
	
	ScavTrap heitor("Heitor");	
	ScavTrap nuno;
	nuno = heitor;

	heitor.attack("Ivo");
	ivo.takeDamage(20);
	joao.attack("Ivo");
	ivo.takeDamage(20);
	ivo.attack("João");
	joao.takeDamage(0);
	heitor.attack("João");
	joao.takeDamage(20);
	ivo.beRepaired(2);
	heitor.takeDamage(1);
	heitor.guardGate();
	heitor.display_obj();
	
	// ivo.attack("João");
	// joao.takeDamage(2);
	// joao.takeDamage(3);
	// ivo.attack("João");
	// joao.takeDamage(2);
	// joao.attack("Ivo");
	// joao.takeDamage(5);
	// ivo.beRepaired(2);
	// ivo.attack("João");
	// joao.beRepaired(10);
}

