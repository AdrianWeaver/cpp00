/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:46:12 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/16 10:08:34 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctype.h>
#include <stdlib.h>
#include "Phonebook.hpp"

Phonebook::Phonebook(void) : _totalContacts(0)
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

void	Phonebook::_printCategory(int index)
{
	std::cout << "|         " << index;
}

void	Phonebook::_printCategory(std::string content)
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

int	Phonebook::_printContact(int index) const
{
	if (index + 1 <= this->_totalContacts)
	{
		std::cout << "First name: " << contacts[index].getFirstName()
			<< std::endl;
		std::cout << "Last name: " << contacts[index].getLastName()
			<< std::endl;
		std::cout << "Nickname: " << contacts[index].getNickname()
			<< std::endl;
		std::cout << "Phone number: " << contacts[index].getPhoneNumber()
			<< std::endl;
		std::cout << "Darkest secret: " << contacts[index].getDarkestSecret()
			<< std::endl;
		return (0);
	}
	else
	{
		return (1);
	}
}

void	Phonebook::search(void)
{
	int			i;
	std::string	input;
	int			valid_index;

	i = 0;
	valid_index = 0;
	if (this->_totalContacts == 0)
	{
		std::cout << "The phonebook is empty" << std::endl;
		return ;
	}
	while (i < 8)
	{
		if (contacts[i].getFirstName().empty() != 1)
		{
			_printCategory(i);
			_printCategory(contacts[i].getFirstName());
			_printCategory(contacts[i].getLastName());
			_printCategory(contacts[i].getNickname());
			std::cout << "|" << std::endl;
		}
		i++;
	}
	while (valid_index == 0)
	{
		std::cout << "Give me the index you are looking for" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "Closing stdin, shutting down program." << std::endl;
			return ;
		}
		if (input.empty() || !isdigit(input[0])
			|| atoi(input.c_str()) > this->_totalContacts
			|| atoi(input.c_str()) < 0
			|| this->_printContact(atoi(input.c_str())))
			std::cout << "Please provide an existing index!" << std::endl;
		else
			valid_index = 1;
	}
	return ;
}

void	Phonebook::add(int index)
{
	std::string	input;
	int			i;
	std::string category[] = { "first name", "last name", "nickname",
									"phone number", "darkest secret"};
	void	(Contact::*funct[])(std::string) = {
		&Contact::setFirstName,
		&Contact::setLastName,
		&Contact::setNickname,
		&Contact::setPhoneNumber,
		&Contact::setDarkestSecret,
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
	if (this->_totalContacts < 8)
		this->_totalContacts++;
}
