/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 10:08:14 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/07 14:01:01 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout<<"DiamondTrap default constructor called"<<std::endl;
	this->name = "Anonymous DiamondTrap";
	ClapTrap::name = this->name + "_clap_name";
	this->hitPts = 100;
	this->energyPts = 50;
	this->attackDmg = 30;
}

DiamondTrap::DiamondTrap(std::string name) 
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout<<"DiamondTrap normal constructor called"<<std::endl;
	this->name = name;
	ClapTrap::name = this->name + "_clap_name";
	this->hitPts = FragTrap::hitPts;
	this->energyPts = ScavTrap::energyPts;
	this->attackDmg = FragTrap::attackDmg;
	std::cout<<this->attackDmg<<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
	: ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	this->name = other.name;
	this->ClapTrap::name = other.ClapTrap::name;
	this->hitPts = other.hitPts;
	this->energyPts = other.energyPts;
	this->attackDmg = other.attackDmg;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->ClapTrap::name = other.ClapTrap::name;
		this->hitPts = other.hitPts;
		this->energyPts = other.energyPts;
		this->attackDmg = other.attackDmg;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<"DiamondTrap destructor called"<<std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout<<"I am DiamondTrap. My name is: "<<this->name<<std::endl;
	std::cout<<"My ClapTrap name is: "<<ClapTrap::name<<std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
