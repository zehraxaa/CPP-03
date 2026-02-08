/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:36:33 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/07 14:57:29 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap 
{
	private:
		std::string		name;
		unsigned int	hitPts;
		unsigned int	energyPts;
		unsigned int	attackDmg;
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &other);
		ClapTrap& operator=(const ClapTrap &other);
		~ClapTrap();
		
		ClapTrap(std::string name);
		std::string getName();
		void	setName(std::string nm);
		int		getAttackDmg();
		void	setAttackDmg(unsigned int dmg);
		int		getEnergyPts();
		void	setEnergyPts(unsigned int ePts);
		int		getHitPts();
		void	setHitPts(unsigned int hPts);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif