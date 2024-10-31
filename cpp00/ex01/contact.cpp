/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doliprane <doliprane@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:55:54 by moel-fat          #+#    #+#             */
/*   Updated: 2024/10/03 14:23:13 by doliprane        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

// Setters
void Contact::setFirstName(const std::string &fname)
{
    first_name = fname;
}

void Contact::setLastName(const std::string &lname)
{
    last_name = lname;
}

void Contact::setNickname(const std::string &nname)
{
    nickname = nname;
}

void Contact::setPhoneNumber(const std::string &pnumber)
{
    phone_number = pnumber;
}

void Contact::setDarkestSecret(const std::string &secret)
{
    darkest_secret = secret;
}

// Getters
std::string Contact::getFirstName() const
{
    return first_name;
}

std::string Contact::getLastName() const
{
    return last_name;
}

std::string Contact::getNickname() const
{
    return nickname;
}

std::string Contact::getPhoneNumber() const
{
    return phone_number;
}

std::string Contact::getDarkestSecret() const
{
    return darkest_secret;
}
