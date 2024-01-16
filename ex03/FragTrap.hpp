/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:05:54 by ialves-m          #+#    #+#             */
/*   Updated: 2024/01/16 12:54:58 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_
# define _FRAGTRAP_

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap( void );
	FragTrap( std::string const name );
	FragTrap( const FragTrap& copy );
	FragTrap& operator=( const FragTrap& input );
	~FragTrap( void );
	void attack( const std::string& target );
	void highFivesGuys( void );
};

#endif
