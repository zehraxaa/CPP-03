/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 00:07:44 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/07 15:15:32 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout<<"FragTrap default constructor called"<<std::endl;
	this->hitPts = 100;
	this->energyPts = 100;
	this->attackDmg = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"FragTrap name constructor called"<<std::endl;
	this->name = name;
	this->hitPts = 100;
	this->energyPts = 100;
	this->attackDmg = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout<<"FragTrap copy constructor called"<<std::endl;
	this->name = other.name;
	this->hitPts = other.hitPts;
	this->energyPts = other.energyPts;
	this->attackDmg = other.attackDmg;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	std::cout<<"FragTrap copy assignment operator called"<<std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap destructor called"<<std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout<<name<<" kindly request a high five!!!"<<std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (energyPts > 0 && hitPts > 0)
	{
		std::cout<<"FragTrap "<<this->name<<" attacks "<<target<<", causing "<<attackDmg<<" points of damage!"<<std::endl;
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
