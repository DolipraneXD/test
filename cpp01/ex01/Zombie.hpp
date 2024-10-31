/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 11:36:09 by moel-fat          #+#    #+#             */
/*   Updated: 2024/10/12 11:36:13 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();  // Default constructor
		Zombie(std::string name);  // Constructor with a name
		~Zombie();  // Destructor
		void announce();  // Function for announcing the zombie
		void setName(std::string name);  // Function to set the zombie's name
};

Zombie* zombieHorde( int N, std::string name );

#endif
