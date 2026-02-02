/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:21:42 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/02 23:14:59 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("Goerge");
	ClapTrap c(b);
	a = b;

	a.setAttackDmg(5);
	b.setAttackDmg(5);
	a.setEnergyPts(1);
	a.setHitPts(1);
	b.setEnergyPts(11);
	b.setHitPts(11);
	
	std::cout<<std::endl;
	/*
	a.attack("George");
	a.beRepaired(10);
	a.takeDamage(5);
	a.attack("George");
	a.takeDamage(0);
	a.takeDamage(10);
	a.beRepaired(10);
	*/
	std::cout<<a.getName()<<std::endl;
	std::cout<<c.getAttackDmg()<<std::endl;
	std::cout<<a.getAttackDmg()<<std::endl;
	
	std::cout<<std::endl;
	return 0;
}