/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:43:11 by moel-fat          #+#    #+#             */
/*   Updated: 2024/10/13 16:26:01 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(const std::string& type):type(type){}

void Weapon::setType(std::string type)
{
	this->type = type;
}
std::string& Weapon::getType()
{
	return (type);
}
