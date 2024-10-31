/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:43:05 by moel-fat          #+#    #+#             */
/*   Updated: 2024/10/14 15:58:12 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name): name(name), weapon(NULL){}

void HumanB::setWeapon(Weapon &newweapon)
{
	weapon = &newweapon;
}

void HumanB::attack()
{
	if (weapon)
		std::cout << name << "attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with!" << std::endl;
}
