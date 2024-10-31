/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doliprane <doliprane@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:15:43 by moel-fat          #+#    #+#             */
/*   Updated: 2024/10/03 14:23:39 by doliprane        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"
# include <iostream>

class PhoneBook
{
private:
    Contact contacts[8];
    int index;
public:
    PhoneBook();
    void add();
    void search();
};

#endif
