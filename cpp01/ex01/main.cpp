/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 11:35:50 by moel-fat          #+#    #+#             */
/*   Updated: 2024/10/12 11:35:52 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	int N = 6;
	Zombie *holder = zombieHorde(N, "zizzo");

	for (int i = 0; i < N; i++)
	{
		holder[i].announce();
	}

	delete[] holder;

	return 0;
}
