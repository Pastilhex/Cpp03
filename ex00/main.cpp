/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:10:00 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/12 16:22:54 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap ivo("Ivo");
	ClapTrap joao("João");
	
	ivo.attack("João");
	joao.takeDamage(2);
	joao.attack("Ivo");
	joao.takeDamage(5);
	ivo.beRepaired(2);
	ivo.attack("João");
	joao.takeDamage(3);
	joao.takeDamage(3);
	joao.takeDamage(3);
	joao.takeDamage(3);
	ivo.attack("João");
	joao.takeDamage(2);
	joao.attack("Ivo");
	joao.takeDamage(5);
	ivo.beRepaired(2);
	ivo.attack("João");
	joao.takeDamage(3);
	joao.takeDamage(3);
	joao.takeDamage(3);
	joao.takeDamage(3);
	joao.beRepaired(10);
}

