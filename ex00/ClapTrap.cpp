/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:47:35 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/01 23:30:08 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout<<"Default constructor called"<<std::endl;
	this->name = "Anonymous";
	this->energyPts = 10; //repair yapmak ve attack-1 enerji
	this->hitPts = 10; //başta 10 tane vurma hakkı var. karşı taraf dayak yiyince x kadar kaybediyor. repair yapınca claptrap x kadar geri kazanıyor
	this->attackDmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if (this != &other)
	{
		this->name = other.name;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Destructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout<<"Constructor called"<<std::endl;
	this->name = name;
	this->energyPts = 10;
	this->hitPts = 10;
	this->attackDmg = 0;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout<<"ClapTrap "<<this->name<<" attacks "<<target<<", causing"
}