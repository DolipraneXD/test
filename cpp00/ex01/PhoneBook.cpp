/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 09:02:49 by moel-fat          #+#    #+#             */
/*   Updated: 2024/10/30 15:42:22 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
}

void PhoneBook::add()
{
    std::string firstname, lastname, nickname, phone_number, darkest_secret;

    while (true) {
        std::cout << "We are adding you to the PhoneBook. Please enter your first name:\n";
        std::getline(std::cin, firstname);

        if(std::cin.eof() || std::cin.bad())
        {
            std::cout << "end of line " << std::endl;
            exit(1);
        }
        if (firstname.empty()) {
            std::cout << "First name cannot be empty. Please enter again.\n";
            continue;
        }
        std::cout << "Now your last name:\n";
        std::getline(std::cin, lastname);
        if (lastname.empty()) {
            std::cout << "Last name cannot be empty. Please enter again.\n";
            continue;
        }
        std::cout << "And your nickname:\n";
        std::getline(std::cin, nickname);
        if (nickname.empty()) {
            std::cout << "Nickname cannot be empty. Please enter again.\n";
            continue;
        }
        std::cout << "We will need your phone number:\n";
        std::getline(std::cin, phone_number);
        if (phone_number.empty()) {
            std::cout << "Phone number cannot be empty. Please enter again.\n";
            continue;
        }
        std::cout << "For sure you have some dark secret. Tell us:\n";
        std::getline(std::cin, darkest_secret);
        if (darkest_secret.empty()) {
            std::cout << "Darkest secret cannot be empty. Please enter again.\n";
            continue;
        }
        contacts[index].setFirstName(firstname);
        contacts[index].setLastName(lastname);
        contacts[index].setNickname(nickname);
        contacts[index].setPhoneNumber(phone_number);
        contacts[index].setDarkestSecret(darkest_secret);
        index = (index + 1) % 8;
        break ;
    }
}

void PhoneBook::search()
{
    int search_index;
    std::string tmp;

    std::cout << "Please enter the index to search for: " << std::endl;
    std::getline(std::cin, tmp);

    // Ensure input is a single character and a digit
    if (tmp.length() == 1 && std::isdigit(tmp[0]))
    {
        search_index = std::atoi(tmp.c_str());
        // search_index = std::stoi(tmp);

        // Validate if the index is within the correct range
        if (search_index >= 0 && search_index < 8)
        {
            std::cout << "First Name: " << contacts[search_index].getFirstName() << std::endl;
            std::cout << "Last Name: " << contacts[search_index].getLastName() << std::endl;
            std::cout << "Nickname: " << contacts[search_index].getNickname() << std::endl;
            std::cout << "Phone Number: " << contacts[search_index].getPhoneNumber() << std::endl;
            std::cout << "Darkest Secret: " << contacts[search_index].getDarkestSecret() << std::endl;
        }
        else
        {
            std::cout << "Invalid index!" << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid input! Please enter a digit between 0 and 7." << std::endl;
    }
}
