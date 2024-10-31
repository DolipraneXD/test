/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 11:36:20 by moel-fat          #+#    #+#             */
/*   Updated: 2024/10/12 11:36:22 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Zombie.hpp"

// Zombie* zombieHorde( int N, std::string name )
// {
// 	if(N < 0)
// 		return NULL;

// 	Zombie* ptr = new Zombie[N];

// 	for(int i = 0; i < N; i++)
// 	{
// 		ptr[i].setName(name);
// 	}
// 	return ptr;
// }

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	if (N <= 0)
		return NULL;  // Return nullptr if N is zero or negative

	Zombie* ptr = new Zombie[N];  // Allocate an array of N Zombies

	// Initialize each Zombie with the provided name
	for (int i = 0; i < N; i++) {
		ptr[i].setName(name);
	}
	return ptr;
}

