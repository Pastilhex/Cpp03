/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:10:00 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/14 18:46:55 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap ivo("Ivo");
	ClapTrap joao("João");
	ClapTrap heitor;
	ClapTrap nuno;
	heitor = ivo;
	nuno = ClapTrap("Nuno");
	
	// heitor.attack("ivo");
	// ivo.takeDamage(0);
	
	
	
	// ivo.attack("João");
	// joao.takeDamage(2);
	
	// joao.attack("Heitor");
	// heitor.takeDamage(3);
	// heitor.beRepaired(2);
	
	// ivo.attack("João");
	// joao.takeDamage(2);

	// ivo.attack("João");
	// joao.takeDamage(5);
	// ivo.beRepaired(2);
	// joao.takeDamage(3);
	// joao.beRepaired(10);
}

