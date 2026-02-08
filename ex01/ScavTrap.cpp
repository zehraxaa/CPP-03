/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:44:14 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/07 14:31:37 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout<<"ScavTrap default constructor called"<<std::endl;
	this->hitPts = 100;
	this->energyPts = 50;
	this->attackDmg = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"ScavTrap name constructor called"<<std::endl;
	this->name = name;
	this->hitPts = 100;
	this->energyPts = 50;
	this->attackDmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout<<"ScavTrap copy constructor called"<<std::endl;
	this->name = other.name;
	this->hitPts = other.hitPts;
	this->energyPts = other.energyPts;
	this->attackDmg = other.attackDmg;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	std::cout<<"ScavTrap copy assignment operator called"<<std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap destructor called"<<std::endl;
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap "<<name<<" is now in Gate keeper mode"<<std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (energyPts > 0 && hitPts > 0)
	{
		std::cout<<"ScavTrap "<<this->name<<" attacks "<<target<<", causing "<<attackDmg<<" points of damage!"<<std::endl;
		energyPts--;
		std::cout<<"("<<name<<")"<<" Energy Points: "<<energyPts<<", Hit Points: "<<hitPts<<std::endl;
		if (energyPts == 1)
			std::cout<<"One last energy point for "<<name<<". My advice, use it to repair yourself :)"<<std::endl;
	}
	else
	{
		std::cout<<name<<" has low points to attack!"<<std::endl;
		std::cout<<"("<<name<<")"<<" Energy Points: "<<energyPts<<", Hit Points: "<<hitPts<<std::endl;
	}
}