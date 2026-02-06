/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:47:35 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/07 00:29:19 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout<<"ClapTrap default constructor called"<<std::endl;
	this->name = "Anonymous";
	this->energyPts = 10;
	this->hitPts = 10;
	this->attackDmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout<<"ClapTrap copy constructor called"<<std::endl;
	this->name = other.name;
	this->hitPts = other.hitPts;
	this->energyPts = other.energyPts;
	this->attackDmg = other.attackDmg;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout<<"ClapTrap copy assignment operator called"<<std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPts = other.hitPts;
		this->energyPts = other.energyPts;
		this->attackDmg = other.attackDmg;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap destructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout<<"ClapTrap name constructor called"<<std::endl;
	this->name = name;
	this->energyPts = 10;
	this->hitPts = 10;
	this->attackDmg = 0;
}

std::string ClapTrap::getName() { return name; }

void ClapTrap::setName(std::string nm) { name = nm; }

int	ClapTrap::getAttackDmg() { return attackDmg; }

void ClapTrap::setAttackDmg(unsigned int dmg) { attackDmg = dmg; }

int ClapTrap::getEnergyPts() { return energyPts;}

void ClapTrap::setEnergyPts(unsigned int ePts) { energyPts = ePts; }

int ClapTrap::getHitPts() { return hitPts; }

void ClapTrap::setHitPts(unsigned int hPts) { hitPts = hPts; }


void	ClapTrap::attack(const std::string& target)
{
	if (energyPts > 0 && hitPts > 0)
	{
		std::cout<<"ClapTrap "<<this->name<<" attacks "<<target<<", causing "<<attackDmg<<" points of damage!"<<std::endl;
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPts == 0)
	{
		std::cout<<name<<" is already dead. Can't take anymore damage."<<std::endl;
		std::cout<<"("<<name<<")"<<" Energy Points: "<<energyPts<<", Hit Points: "<<hitPts<<std::endl;
		return ;
	}
	if (hitPts >= amount)
	{
		hitPts -= amount;
		std::cout<<name<<" takes "<<amount<<" points of damage"<<std::endl;
		std::cout<<"("<<name<<")"<<" Energy Points: "<<energyPts<<", Hit Points: "<<hitPts<<std::endl;
	}
	else if (hitPts < amount)
		hitPts = 0;
	
	if (hitPts == 0 )
	{
		std::cout<<name<<" dies cause "<<amount<<" points of damage!"<<std::endl;
		std::cout<<"("<<name<<")"<<" Energy Points: "<<energyPts<<", Hit Points: "<<hitPts<<std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPts <= 0)
	{
		std::cout<<name<<" is dead. You know that right?"<<std::endl;
		std::cout<<"("<<name<<")"<<" Energy Points: "<<energyPts<<", Hit Points: "<<hitPts<<std::endl;
		return ;
	}
	if (energyPts >= 1)
	{
		hitPts += amount;
		std::cout<<name<<" repaired itself. Watch out! Coming stronger..."<<std::endl;
		energyPts--;
	}
	else {
		std::cout<<name<<" has low energy point to repair."<<" Sorry, but you're gonna die :("<<std::endl;
	}
	std::cout<<"("<<name<<")"<<" Energy Points: "<<energyPts<<", Hit Points: "<<hitPts<<std::endl;
}
