/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:27:46 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/07 14:31:45 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap* obj1 = new ScavTrap("Fatih Sultan Mehmet");
	ScavTrap obj2("Bizans Ordusu");
	
	obj1->attack("Bizans Ordusu");
	obj2.takeDamage(20);
	obj2.attack("Fatih Sultan Mehmet");
	obj1->takeDamage(20);
	obj1->beRepaired(1453);
	obj1->setAttackDmg(80);
	obj1->attack("Bizans Ordusu");
	obj2.takeDamage(90);
	obj1->attack("Bizans Ordusu");
	obj2.takeDamage(80);
	obj2.attack("Fatih Sultan Mehmet");
	obj2.guardGate();

	std::cout<<std::endl<<obj1->getName()<<" won the war!!!"<<std::endl;
	
	delete obj1;
}