/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:46:12 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/09 17:56:06 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctype.h>
#include <stdlib.h>
#include "phonebook.hpp"

Phonebook::Phonebook(void) : _total_contacts(0)
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

void	Phonebook::print_category(int index)
{
	std::cout << "|         " << index;
}

void	Phonebook::print_category(std::string content)
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

int	Phonebook::_print_contact(int index) const
{
	if (index + 1 <= this->_total_contacts)
	{
		std::cout << "First name: " << contacts[index].get_first_name()
			<< std::endl;
		std::cout << "Last name: " << contacts[index].get_last_name()
			<< std::endl;
		std::cout << "Nickname: " << contacts[index].get_nickname()
			<< std::endl;
		std::cout << "Phone number: " << contacts[index].get_phone_number()
			<< std::endl;
		std::cout << "Darkest secret: " << contacts[index].get_darkest_secret()
			<< std::endl;
		std::cout << "yes" << std::endl;
		return (0);
	}
	else
	{
		std::cout << "entered here"<< std::endl;
		return (1);
	}
}

void	Phonebook::search(void)
{
	int			i;
	std::string	input;

	i = 0;
	if (this->_total_contacts == 0)
	{
		std::cout << "The phonebook is empty" << std::endl;
		return ;
	}
	while (i < 8)
	{
		if (contacts[i].get_first_name().empty() != 1)
		{
			print_category(i);
			print_category(contacts[i].get_first_name());
			print_category(contacts[i].get_last_name());
			print_category(contacts[i].get_nickname());
			std::cout << "|" << std::endl;
		}
		i++;
	}
	do
	{
		std::cout << "Give me the index you are looking for" << std::endl;
		std::getline(std::cin, input);
		if (input.empty() || input.size() != 1 || !isdigit(input[0]))
			std::cout << "Please provide an existing index!" << std::endl;
	} while (input.empty() && input.size() != 1 && !isdigit(input[0])
			&& (atoi(input.c_str()) > this->_total_contacts || atoi(input.c_str()) < 0)
			&& this->_print_contact(atoi(input.c_str())));
	return ;
}

void	Phonebook::add(int index)
{
	std::string	input;
	int			i;
	std::string category[] = { "first name", "last name", "nickname",
									"phone number", "darkest secret"};
	void	(Contact::*funct[])(std::string) = {
		&Contact::set_first_name,
		&Contact::set_last_name,
		&Contact::set_nickname,
		&Contact::set_phone_number,
		&Contact::set_darkest_secret,
	};
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
			if (input.empty())
				std::cout << "Please provide something!" << std::endl;
		} while (input.empty());
		(contacts[index].*(funct[i]))(input);
		i++;
	}
	if (this->_total_contacts < 8)
		this->_total_contacts++;
}
