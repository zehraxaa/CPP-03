/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:36:33 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/01 23:27:59 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
	private:
		std::string name;
		int	hitPts;
		int	energyPts;
		int	attackDmg;
	public:
		ClapTrap(void); //default
		ClapTrap(const ClapTrap &other); //copy const.
		ClapTrap& operator=(const ClapTrap &other);
		~ClapTrap();
		
		ClapTrap(std::string name);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif