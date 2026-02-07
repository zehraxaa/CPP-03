/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:27:46 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/07 14:02:19 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
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

	std::cout<<std::endl;
	
}