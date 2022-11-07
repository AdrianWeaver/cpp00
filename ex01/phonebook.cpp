/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:46:12 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/07 16:47:41 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	if (DEBUG)
		std::cout << "Phonebook constructor called" << std::endl;
	return ;
}


Phonebook::~Phonebook(void)
{
	if (DEBUG)
		std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

void	Phonebook::_print_category(int index)
{
	std::cout << "|         " << index;
}

void	Phonebook::_print_category(std::string content)
{
	std::cout << "|";
	if (content.size() > 10)
	{
		content.resize(9);
		content += ".";
	}
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << content;
}

void	Phonebook::search(void)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (contacts[i].first_name != "")
		{
			_print_category(i);
			_print_category(contacts[i].first_name);
			_print_category(contacts[i].last_name);
			_print_category(contacts[i].nickname);
			std::cout << "|" << std::endl;
		}
		i++;
	}
	return ;
}

void	Phonebook::add(int index)
{
	std::string	input;
	int			i;
	std::string category[] = { "first name", "last name", "nickname", "phone number", "darkest secret"};
	std::string *storage[] = {&contacts[index].first_name, &contacts[index].last_name, &contacts[index].nickname, &contacts[index].phone_number, &contacts[index].darkest_secret};

	input = "";
	i = 0;
	while (i < 5)
	{
		do
		{
			if (std::cin.eof())
			{
				return ;
			}
			std::cout << "What is your " << category[i] << "?" << std::endl;
			std::getline(std::cin, input);
			if (input == "")
				std::cout << "Please provide something!" << std::endl;
		} while (input == "");
		*storage[i] = input;
		i++;
	}
}
