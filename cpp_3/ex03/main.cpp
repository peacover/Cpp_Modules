/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 08:27:33 by yer-raki          #+#    #+#             */
/*   Updated: 2021/11/01 13:23:38 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
// #include "ScavTrap.hpp"

int main(void)
{
	// DiamondTrap i("test");
	// ClapTrap	i1("admin1");
	// FragTrap	i2("admin2");

	// i1.attack("user1");
	// i1.takeDamage(10);
	// i1.beRepaired(4);
	// std::cout << i1 << std::endl;

	// i2.attack("user3");
	// i2.takeDamage(11);
	// i2.beRepaired(15);
	// i2.highFivesGuys();
	// std::cout << i2 << std::endl;

	DiamondTrap	Diamond("admin");

	Diamond.attack("student");
	Diamond.takeDamage(7);
	Diamond.beRepaired(5);
	Diamond.guardGate();
	Diamond.highFivesGuys();
	Diamond.whoAmI();
	// std::cout << Diamond << std::endl;

	return (0);
}