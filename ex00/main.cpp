/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:10:00 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/15 10:59:39 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap ivo("Ivo");
	ClapTrap joao("João");
	ClapTrap heitor(ivo);
	ClapTrap nuno;
	nuno = ClapTrap("Nuno");
	
	heitor.attack("João");
	ivo.attack("João");
	joao.attack("Heitor");
	nuno.attack("João");
	
	heitor.display_obj();
	
	// ivo.takeDamage(0);
	// joao.takeDamage(2);
	// heitor.takeDamage(3);
	// joao.takeDamage(2);
	// joao.takeDamage(5);
	// joao.takeDamage(3);
	
	

	// heitor.beRepaired(2);
	// ivo.beRepaired(2);
	// joao.beRepaired(10);
}

