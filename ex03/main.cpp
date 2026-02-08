/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:27:46 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/07 16:11:49 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout<<std::endl;
	std::cout<<std::endl;
	
	DiamondTrap a("Zombie");
	DiamondTrap b("Monster");
	DiamondTrap c(b);
	
	a.whoAmI();
	b.whoAmI();
	c.whoAmI();
	
	std::cout<<std::endl;
	std::cout<<std::endl;
	
	a.attack("Monster");
	b.takeDamage(30);
	b.attack("Zombie");
	a.takeDamage(30);
	a.beRepaired(30);
	a.highFivesGuys();
	b.guardGate();

	std::cout<<std::endl;
	std::cout<<std::endl;
	return 0;
}