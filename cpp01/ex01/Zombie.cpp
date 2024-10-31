/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 11:36:02 by moel-fat          #+#    #+#             */
/*   Updated: 2024/10/12 11:36:05 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Zombie.hpp"

// Zombie::Zombie(std::string name)
// {
// 	this->name = name;
// }

// Zombie::~Zombie()
// {
// 	std::cout<< this->name << " has been destroyed." << std::endl;
// }

// void Zombie::announce()
// {
// 	std::cout<<this->name <<" BraiiiiiiinnnzzzZ..." <<std::endl;
// }

// void Zombie::setName(std::string name)
// {
// 	this->name = name;
// }

#include "Zombie.hpp"

// Default constructor
Zombie::Zombie() : name("Unnamed") {  // Initializes unnamed zombies with a default name
}

// Constructor with a name
Zombie::Zombie(std::string name) {
	this->name = name;
}

// Destructor
Zombie::~Zombie() {
	std::cout << this->name << " has been destroyed." << std::endl;
}

// Function to announce the zombie
void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Setter function to change the zombie's name
void Zombie::setName(std::string name) {
	this->name = name;
}
