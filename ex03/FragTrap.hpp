/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 00:02:58 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/07 10:51:18 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap //sahip çıkalım dedeye
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);
		FragTrap& operator=(const FragTrap &other);
		~FragTrap();

		void highFivesGuys(void);
		void attack(const std::string& target);
};

#endif