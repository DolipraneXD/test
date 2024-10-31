/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:43:07 by moel-fat          #+#    #+#             */
/*   Updated: 2024/10/13 17:25:41 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : weapon(weapon), name(name) {}


void HumanA::attack()
{
	std::cout << name << "attacks with their " << weapon.getType() << std::endl;
}
